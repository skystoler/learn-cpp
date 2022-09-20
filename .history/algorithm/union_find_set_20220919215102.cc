#include <iostream>
#include <vector>

using namespace std;

int a[10];

//初始化并查集
void init(int n){
    for(int i=1;i<=n;++i) a[i]=i;
}

int find(int x){
    if(x==a[x]) return x;
    else return find(a[x]);
}


int main(){

}