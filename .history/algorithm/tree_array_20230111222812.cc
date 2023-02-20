#include <iostream>
#include <cstring>
#include <time.h>

#define lowbit(x) ((x) & (-x))
using namespace std;

clock_t start,e;

const int MAXN=50007;
int f[MAXN];
int t[MAXN];

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

/*
28007000
time:0.003ms
*/
void tree_array(){
    memset(&f,0,sizeof(f));
    for(int i=1;i<10000;++i){
        update(i,i);
    }
    start=clock();
    int ans=query(5000,9000);
    e=clock();
    cout<<ans<<endl;
    double time=(double)(e-start)/CLOCKS_PER_SEC;
    cout<<"time:"<<time*1000<<"ms"<<endl;
}

void common_array(){
    memset(&t,0,sizeof(t));
    for(int i=1;i<10000;++i){
        t[i]=i;
    }
    start=clock();
    int ans=0;
    for(int i=5000;i<9001;++i){
        ans+=t[i];
    }
    e=clock();
    cout<<ans<<endl;
    double time=(double)(e-start)/CLOCKS_PER_SEC;
    cout<<"time:"<<time*1000<<"ms"<<endl;
}

int main(){
    tree_array();
    //common_array();
    return 0;
}