#include <random>
#include <iostream>

using namespace std;

void test1(){
    int length=10;
    cout<<rand()%length<<endl;
    cout<<rand()%length<<endl;
}

void test2(){
    default_random_engine(time(NULL));
    uniform_int_distribution<int>(0,100);
    for(int i=0;i<10;++i){
        cout<<u(e)<<endl;
    }
}

int main(){
    //test1();
    test2();
    return 0;
}

