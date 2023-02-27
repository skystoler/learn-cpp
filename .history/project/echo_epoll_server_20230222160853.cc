#include <iostream>
#include <socket>
using namespace std;

#define EPOLL_SIZE 50
#define BUFFSIZE 100

int main(int argc,char* argv[]){
    int serv_sock,client_sock;

    serv_sock=socket(PF_INET,SOCK_STREAM,0);

    struct sockaddr_in serv_addr,client_addr;

    memset(&serv_addr,0,sizeof(serv_addr));
    serv_addr.sin_family=AF_INET;
    serv_addr.sin_addr.s_addr=INADDR_ANY;
    serv_addr.sin_port=htons(aoti(argv[1]));

    bind(serv_sock,(struct sockaddr*)&serv_addr,sizeof(serv_addr));

    listen(serv_sock,5);

    char buf[BUFFSIZE];
    /*
    epoll
    */

    int epfd=epoll_create(EPOLL_SIZE);

    struct epoll_event event;
    struct epoll_event* ep_events;

    event.events=EPOLLIN;
    event.data.fd=serv_sock;
    epoll_ctl(epfd,EPOLL_CTL_ADD,serv_sock,&event);

    while(true){
        int event_cnt=epoll_wait(epfd,ep_events,EPOLL_SIZE,-1);    

        for(int i=0;i<event_cnt;++i){
            if(ep_events[i].data.fd==serv_sock){
                client_sock=accept(serv_sock,(struct sockaddr*)&client_addr,sizeof(client_addr));
                event.events=EPOLLIN;
                event.data.fd=client_sock;
                epoll_ctl(epfd,EPOLL_CTL_ADD,client_sock,&event);
            }else{
                str_len=read(ep_events[i].data.fd,buf,BUFFSIZE);
                if(str_len==0){
                    epoll_ctl(epfd,EPOLL_CTL_DEL,ep_events[i].data.fd,NULL);
                    close(ep_events[i].data.fd);
                }else{
                    write(ep_events[i].data.fd,buf,str_len);
                }
            }
        }
    }

    close(serv_sock);
    close(epfd);
    return 0;
}