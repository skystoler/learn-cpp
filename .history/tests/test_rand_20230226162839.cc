#include <random>
#include <iostream>
#include <stdlib.h>

using namespace std;

void test1(){
    int length=10;
    cout<<rand()%length<<endl;
    cout<<rand()%length<<endl;
}

void test2(){
    seed_seq seq{1,2,3,4,5};
    seq.generate(seeds.begin(), seeds.end());
    default_random_engine e(time(NULL));
    uniform_int_distribution<int> u(0,9);
    for(int i=0;i<1;++i){
       
        cout<<u(e)<<endl;
    }
}

void test3(){
    uniform_real_distribution<> dis(0.0, 1.0);
    mt19937 rand_gen_;
    double x=dis(rand_gen_(1));
}

int main(){
    //test1();
    test3();
    return 0;
}