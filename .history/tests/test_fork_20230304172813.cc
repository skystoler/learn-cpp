#include <iostream>
#include <unistd.h>
using namespace std;

int main(){
    for(int i=0;i<4;++i){
        fork();
        cout<<"hello world"<<endl;
    }
    //output 16 times
    cout<<"hello world"<<endl;
    return 0;
}