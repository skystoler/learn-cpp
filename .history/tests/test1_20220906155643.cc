#include <iostream>

void f(short int x){
    *x=100;
}

int main(int argc,char** argv){
    int p;
    f(&p);
    printf("%d\n",p);
    return 0;
}