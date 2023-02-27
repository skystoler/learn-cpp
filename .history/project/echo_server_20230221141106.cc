#include <iostream>
#include <socket>

using namespace std;

int main(int argc,char* argv[]){
    int sock;
    sock=socket(PF_INET,SOCK_STREAM,0);

    struct sockaddr_in serv_addr,client_addr;
    memset(&serv_addr,0,sizeof(serv_addr));
    serv_addr.sin_family=AF_INET;
    serv_addr.sin_addr.s_addr=INADDR_ANY;
    serv_addr.sin_port=htons(atoi(argv[1]));

    bind(sock,(struct sockaddr*)&serv_addr,sizeof(serv_addr));

    listen(sock,5);

    
    while(int i=0;i<5;++i){
        accept(sock,(struct sockaddr*)&client_addr,&sizeof(client_addr));
    }
}