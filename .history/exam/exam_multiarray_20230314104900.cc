#include <iostream>

using namespace std;

int main(){
    int ia[3][4];
    int (*p) [4]=ia;
    for(int i=0;i<3;++i){
        for(int j=0;j<4;++j){
            //cout<<p[i][j]<<" ";
            cout<<*p++<<" ";
        }
        cout<<endl;
    }
}