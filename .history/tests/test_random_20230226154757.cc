#include <iostream>
#include <random>

using namespace std;

int main(){
    default_random_engine(time(NULL));
    uniform_int_distribution<int>(0,100);

    for(int i=0;i<10;++i){
        cout<<u(e)<<endl;
    }
    return 0;
}