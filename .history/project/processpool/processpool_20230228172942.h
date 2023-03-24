#ifndef _PROCESSPOOL_H
#define _PROCESSPOOL_H

#include <iostream>
#include <sys/socket.h>
#include <sys/epoll.h>

class process{
public:
    process():m_pid(-1){

    }
private:
    pid_t m_pid;
    int m_pipefd[2];
};

template <typename T>
class processpool{
    
    //单例模式
private:
    processpool(int listenfd,int process_number=8)
        :m_listenfd(listenfd),m_process_number(process_number)
        ,m_idx(-1),m_stop(false){
            assert((m_process_number>0) && (process_number<MAX_PROCESS_NUMBER));
            m_subprocess=new process[process_number];

            //创建子进程
            for(int i=0;i<process_number;++i){

                //socketpair用于创建一对相互连接的套接字的系统调用
                int ret=socketpair(AF_UNIX,SOCK_STREAM,0,m_subprocess[i].m_pipedfd);
                assert(ret==0);

                m_subprocess[i].m_pid=fork();
                assert(m_subprocess[i].m_pid>=0);

                //父进程
                if(m_subprocess[i].m_pid>0){
                    close(m_subprocess[i].m_pipedfd[1]);
                    continue;
                }else{//子进程
                    close(m_subprocess[i].m_pipedfd[0]);
                    m_idx=i;
                    break;
                }
            }
    }

public:
    static processpool<T>* getInstance(int listenfd, int process_number=8){
        if(!m_instance){
            m_instance=new processpool<T> (listenfd, process_number);
        }
        return m_instance;
    }
    ~processpool(){
        delete []m_subprocess;
    }

    //父进程中m_idx为-1，子进程m_idx>=0
    void run(){
        if(idx!=-1){
            run_child();
            return;
        }
        run_parent();
    }

private:
    void run_child(){
        int pipefd=m_subprocess[idx].pipefd[1];


    }

    void run_parent(){

    }
private:
    //进程池最大进程数
    static const int MAX_PROCESS_NUMBER=16;
    //每个进程最多处理的用户数
    static const int USER_PER_PROCESS=65535;
    //epoll最多能处理的事件数
    static const int MAX_EVENT_NUMBER=10000;
    int m_process_number;
    //子进程在池中的序号
    int m_idx;
    //子进程是否停止运行
    int m_stop;
    //监听socket
    int m_listenfd;
    //保存所有子进程的描述信息
    process* m_subprocess;
    //进程池静态实例
    static processpool<T>* m_instance = NULL;
};
