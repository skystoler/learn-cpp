#include <iostream>
#include <socket>

using namespace std;

int main(int argc,char* argv[]){
    int serv_sock,client_serv;

    serv_sock=socket(PF_INET,SOCK_STREAM,0);

    struct sock_addr_in serv_addr;
    memset(&serv_addr,0,sizeof(serv_addr));
    serv_addr.sin_family=AF_INET;
    serv_addr.sin_addr.s_addr=INADDR_ANY;
    serv_addr.sin_port=htons(atoi(argv[1]));
    bind()

}