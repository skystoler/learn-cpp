#include <iostream>

using namespace std;

const int MAXN=1e9+7;
int f[MAXN];

int lowbit(int x){
    return x&(-x);
}

void update(int pos,int value){
    for(int i=pos;i<MAXN;i+=lowbit(i)){
        f[i]+=value;
    }
}

int query(int pos){
    int ans=0;
    for(int i=pos;i;i-=lowbit(i)){
        ans+=f[i];
    }
    return ans;
}

int query(int a,int b){
    return query(b)-query(a-1);
}

int main(){
    memset(&f,0,sizeof(f));
    return 0;
}