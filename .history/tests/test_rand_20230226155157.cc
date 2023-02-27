#include <random>
#include <iostream>

using namespace std;

void test1(){
    int length=10;
    cout<<rand()%length<<endl;
    cout<<rand()%length<<endl;
}

/*94
2
90
19
59
38
9
52
66
6
*/
void test2(){
    uniform_int_distribution<int> u(0,100);
    for(int i=0;i<10;++i){
        default_random_engine e(time(0));
        cout<<u(e)<<endl;
    }
}

int main(){
    //test1();
    test2();
    return 0;
}