#include <iostream>
#include <time.h>
#include <math.h>

using namespace std;

clock_t start,e;

int common_pow(){
    int ans=pow(7,10);
    return ans;
}

//recursive
int quick_pow_recursive(int a,int n){
    if(n==0) return 1;
    if(n%2==0) {
        int ans=quick_pow_recursive(a,n/2);
        return ans*ans;
    }else{
        return a*quick_pow_recursive(a,n-1);
    }
}

//non_recursive
int quick_pow(int a,int n){
    int ans=1;
    while(n){
        if(n&1){
            ans*=a;
        }
        a*=a;
        n>>1;
    }
    return ans;
}

//calculate a^n
int main(){
    int a=7,n=10;
    int ans=0;

    start=clock();
    common_pow(a,n);
    //quick_pow_recursive(a,n);
    //quick_pow(a,n);
    e=clock();
    cout<<"ans:"<<ans<<", cost time:"<<(double)(e-start)/CLOCKS_PER_SEC *1000<<"ms"<<endl;

    return 0;
}