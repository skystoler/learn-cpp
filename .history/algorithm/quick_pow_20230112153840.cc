#include <iostream>
#include <time.h>

using namespace std;

clock_t start,e;


int main(){
    int a=7,n=10;
    start=clock();
    cout<<pow(7,10);
    e=clock();
    cout<<"time:"<<(double)(e-start)/CLOCKS_PER_SEC *1000<<"ms";
}