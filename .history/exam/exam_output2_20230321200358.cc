#include <iostream>

#include <stdio.h>
 
using namespace std;
int f(int a, int b, int c){
    return 0;
}
//cba
int main(){
    int* pint = 0;
    pint += 6;
    printf("%d\n", pint);
    printf("%d\n", &pint);
    return  f(printf("a"), printf("b"), printf("c"));
}