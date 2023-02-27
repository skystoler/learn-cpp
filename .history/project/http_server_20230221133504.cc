#include <iostream>
#include <socket>

using namespace std;

int main(int argc,char* argv[]){
    
    int sock=socket(PF_INET,SOCK_STREAM,0);
    if(sock==-1) cout<<"create socket fail!"<<endl;
    struct sockaddr_in serv_addr;
    
    memset(&serv_addr,0,sizeof(serv_addr));             
    serv_addr.sin_family=AF_INET;
    serv_addr.sin_port=htons(atoi(argv[1]));
    serv_addr.sin_addr.s_addr=INADDR_ANY;

    if(bind(sock,(struct sockaddr*)&serv_addr,sizeof(serv_addr))==-1){
        cout<<"bind fail"<<endl;
    }
    
    if(listen(sock,3)==-1){
        cout<<"listen fail"<<endl;
    }

    struct sockaddr_in client_addr;
    int client_sock=accept(sock,(struct sockaddr*)&client_addr,sizeof(client_addr));



    return 0;
}