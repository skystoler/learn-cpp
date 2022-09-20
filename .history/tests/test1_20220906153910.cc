#include <iostream>

void f(uint16_t* p){
    *x=100;
}

int main(int argc,char** argv){
    uint32_t p;
    f(&p);
    printf("%d\n",p);
    return 0;
}