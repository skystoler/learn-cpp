#include <iostream>
#include <cstring>
#include <time.h>

using namespace std;

clock_t start,e;



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
    const int MAXN=1007;
    int f[MAXN];
    memset(&f,0,sizeof(f));

    for(int i=0;i<10;++i){
        update(i,i);
    }

    // start=clock();
    // int ans=query(3,6);
    // e=clock();
    // cout<<ans<<endl;
    // double time=(double)(e-start)/CLOCKS_PER_SEC;
    // cout<<"time:"<<time*1000<<"ms"<<endl;
    return 0;
}