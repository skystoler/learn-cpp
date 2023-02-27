#include <iostream>
#include <socket>

using namespace std;

int main(){
    
    int sock=socket(PF_INET,SOCK_STREAM,&addr);
    if(sock==-1) cout<<"create socket fail!"<<endl;
    return 0;
}