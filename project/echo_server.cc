#include <iostream>
#include <socket>

using namespace std;

#define BUFSIZE 1024;
int main(int argc,char* argv[]){
    int serv_sock;
    serv_sock=socket(PF_INET,SOCK_STREAM,0);

    struct sockaddr_in serv_addr,client_addr;
    memset(&serv_addr,0,sizeof(serv_addr));
    serv_addr.sin_family=AF_INET;
    serv_addr.sin_addr.s_addr=INADDR_ANY;
    serv_addr.sin_port=htons(atoi(argv[1]));

    bind(serv_sock,(struct sockaddr*)&serv_addr,sizeof(serv_addr));

    listen(serv_sock,5);

    char message[BUFSIZE];
    int str_len;
    while(int i=0;i<5;++i){
        int client_sock=accept(sock,(struct sockaddr*)&client_addr,&sizeof(client_addr));
        while(str_len=read(client_sock,messgae,BUFSIZE)!=0){
            write(client_sock,message,str_len);
        }
        close(client_sock);
    }
    close(serv_sock);
    return 0;
}