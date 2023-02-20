#include <iostream>
#include <time.h>

using namespace std;

clock_t start,e;

int common_pow(){
    start=clock();
    int ans=pow(7,10);
    e=clock();
    cout<<"common pow time:"<<(double)(e-start)/CLOCKS_PER_SEC *1000<<"ms";
    return ans;
}

//recursive
int quick_pow(int a,int n){

}

//calculate a^n
int main(){
    int a=7,n=10;
    common_pow(a,x);
    
   
}