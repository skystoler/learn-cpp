#include <string>
#include <iostream>

using namespace std;

int main(){
    string str="hello world";
    auto iter=str.begin();
    cout<<str.empty();
    cout<<*iter.empty()<<endl;
    cout<<iter->empty()<<endl;
    cout<<++*iter->empty()<<endl;
}