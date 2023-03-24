#include <stdlib.h>
#include <stdio.h>

long rfact(long n){
    long res;
    if(n<=1) res=1;
    else res=n*rfact(n-1);
    return res;
}

int main(){
    rfact(5);
    return 0;
}
