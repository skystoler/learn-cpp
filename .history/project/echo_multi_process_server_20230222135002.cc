#include <iostream>
#include <socket>
using namespace std;

int main(int argc,char* argv[]){
    int serv_sock;
    serv_sock=socket(PF_INET,SOCK_STREAM,0);

    struct sockaddr_in serv_addr,client_addr;
    memset(&serv_addr,0,sizeof(serv_addr));

    serv_addr.sin_family=AF_INET;
    serv_addr.sin_addr.s_addr=INADDR_ANY;
    serv_addr.sin_port=htons(atoi(argv[1]));

    bind(serv_addr,(struct sockaddr*)&serv_addr,sizeof(serv_addr));

    listen(serv_addr,5);

    while(true){
        client_addr=accept();
    }

    return 0;
}