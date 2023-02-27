#include <iostream>
#include <socket>
using namespace std;

#define EPOLL_SIZE 50
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

    /*
    epoll
    */

    int epfd=epoll_create(EPOLL_SIZE);

    struct epoll_event event;
    struct epoll_event* epoll_events;

    event.events=EPOLLIN;
    event.data.fd=serv_sock;
    epoll_ctl(epfd,EPOLL_CTL_ADD,serv_sock,&event);

    while(true){
        epoll_wait(epfd,ep_events,EPOLL_SIZE,-1);    
    }


    return 0;
}