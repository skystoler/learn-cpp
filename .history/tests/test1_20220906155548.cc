#include <iostream>

void f(short x){
    *x=100;
}

int main(int argc,char** argv){
    uint16_t p;
    f(&p);
    printf("%d\n",p);
    return 0;
}