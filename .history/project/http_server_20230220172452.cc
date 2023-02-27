#include <iostream>
#include <socket>

using namespace std;

int main(int argc,char* argv[]){
    
    int sock=socket(PF_INET,SOCK_STREAM,0);
    if(sock==-1) cout<<"create socket fail!"<<endl;
    struct sockaddr_in serv_addr;
    serv_addr.sin_family=AF_INET;
    serv_addr.sin_port=hton(atoiargv[1])
    return 0;
}