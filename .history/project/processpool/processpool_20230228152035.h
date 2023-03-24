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
public:
    processpool()
private:
    //进程池最大进程数
    static const int MAX_PROCESS_NUMBER=16;
    //每个进程最多处理的用户数
    static const int USER_PER_PROCESS=65535;
    //epoll最多能处理的事件数
    static const int MAX_EVENT_NUMBER=10000；
    int m_process_number;
    //子进程在池中的序号
    int m_idx;
    int m_stop;
    static processpoll<T>* m_instance = NULL;
};


