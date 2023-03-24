#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    vector<string> str={"hello world","nihao","zty"};
    auto iter=str.begin();

    //编译正确
    cout<<iter->empty()<<endl;

    //编译错误
    // cout<<*iter.empty()<<endl;
    // cout<<++*iter->empty()<<endl;
    
}