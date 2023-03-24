#include <iostream>
#include <vector>
using namespace std;


vector<string> output(string input){
    int n=input.size();
    int i=0;
    vector<string> res;
    while(i<n){
        string tmp;
        if(str[i]!='%'){

        }
    }
}

int main(){
    string input="[%c] [%p] %t %F %f:%l %m%n";
    vector<string> output=parser(input);
    for(auto str:output) cout<<str<<endl;
}