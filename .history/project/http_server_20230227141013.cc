#include <iostream>
#include <socket>
#include <pthread.h>

using namespace std;

int main(int argc,char* argv[]){
    int serv_sock,client_sock;

    serv_sock=socket(PF_INET,SOCK_STREAM,0);

    struct sock_addr_in serv_addr,client_addr;
    memset(&serv_addr,0,sizeof(serv_addr));
    serv_addr.sin_family=AF_INET;
    serv_addr.sin_addr.s_addr=INADDR_ANY;
    serv_addr.sin_port=htons(atoi(argv[1]));
    bind(serv_sock,(struct sock_addr*)&serv_addr,sizeof(serv_addr));

    listen(serv_sock,20);

    pthread_t t_id;

    while(1){
        client_sock=accept(serv_sock,(struct sock_addr*)&client_addr,&sizeof(client_addr));

        pthread_create(&t_id,NULL,request_handler,&client_sock);

        pthread_detach
    }
    

}