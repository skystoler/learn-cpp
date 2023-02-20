#include <iostream>
#include <time.h>
#include <math.h>

using namespace std;

clock_t start,e;

//ans:282475249, cost time:0.048ms
int common_pow(int a,int n){
    int ans=pow(a,n);
    return ans;
}

//recursive,ans:282475249, cost time:0.003ms
int quick_pow_recursive(int a,int n){
    if(n==0) return 1;
    if(n%2==0) {
        int ans=quick_pow_recursive(a,n/2);
        return ans*ans;
    }else{
        return a*quick_pow_recursive(a,n-1);
    }
}

//non_recursive,ans:282475249, cost time:0.002-0.003ms
int quick_pow(int a,int n){
    int ans=1;
    while(n){
        if(n&1){
            ans*=a;
        }
        a*=a;
        n>>=1;
    }
    return ans;
}

//calculate a^n
int main(){
    int a=7,n=10;
    int ans=0;

    start=clock();
    //ans=common_pow(a,n);
    //ans=quick_pow_recursive(a,n);
    ans=quick_pow(a,n);
    e=clock();
    cout<<"ans:"<<ans<<", cost time:"<<(double)(e-start)/CLOCKS_PER_SEC *1000<<"ms"<<endl;

    return 0;
}