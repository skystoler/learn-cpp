#include <iostream>

void f(int* x){
    *x=100;
}

int main(int argc,char** argv){
    short int p;
    f(&p);
    printf("%d\n",p);
    return 0;
}