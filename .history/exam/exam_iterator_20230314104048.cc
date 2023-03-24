#include <string>
#include <iostream>

using namespace std;

int main(){
    string str="hello world";
    auto iter=str.begin();
    //编译正确
    cout<<str.empty()<<endl;
    
    /*编译错误
    cout<<*iter.empty()<<endl;
    cout<<iter->empty()<<endl;
    cout<<++*iter->empty()<<endl;
    */
}