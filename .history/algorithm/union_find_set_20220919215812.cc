#include <iostream>
#include <vector>

using namespace std;

//初始化并查集
void init(int n){
    for(int i=1;i<=n;++i){
        a[i]=i;
    }
}

int find(int x){
    if(x==a[x]) return x;
    else{
        a[x]=find(a[x]); //父节点设为根节点
        return a[x]; //返回父节点
    }

void merge(int i,int j){
    a[find(i)]=find(j);
}

int main(){
    int n;
    cin>>n;
    static int a[n];
    init(n);
}