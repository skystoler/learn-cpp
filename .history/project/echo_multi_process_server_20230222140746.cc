#include <iostream>
#include <socket>

using namespace std;

#define Bufsize 1024
int main(int argc,char* argv[]){
    int serv_sock,client_sock;
    serv_sock=socket(PF_INET,SOCK_STREAM,0);

    struct sockaddr_in serv_addr,client_addr;
    memset(&serv_addr,0,sizeof(serv_addr));

    serv_addr.sin_family=AF_INET;
    serv_addr.sin_addr.s_addr=INADDR_ANY;
    serv_addr.sin_port=htons(atoi(argv[1]));

    bind(serv_addr,(struct sockaddr*)&serv_addr,sizeof(serv_addr));

    listen(serv_addr,5);

    char word[Bufsize];

    int strlen;

    while(true){
        client_sock=accept(serv_sock,(struct sockaddr*)&client_addr,sizeof(client_addr));
        pid=fork();
        if(pid==-1){
            close(client_sock);
            continue;
        }
        //child process
        if(pid==0){
            close(serv_sock);//A serv_sock is also forked into child process, so it must be closed.
            while((strlen=read(client_sock,word,Bufsize))!=-1){
                write(client_sock,word,strlen);
            }
            close(client_sock);
            return 0;
        }else close(client_sock);//parent process
    }

    close(serv_sock);
    return 0;
}