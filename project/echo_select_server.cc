#include <iostream>
#include <socket>
using namespace std;

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
    select
    */

    fd_sets reads;
    FD_ZERO(&reads);//set zero
    FD_SET(serv_sock,&reads);//set corresponding pos as 1

    int fd_max,fd_num;
    fd_max=serv_sock;

    while(true){
        
    }


    return 0;
}