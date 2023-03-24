#include <iostream>
#include <vector>
using namespace std;


vector<string> output(string input){
    int n=input.size();
    int i=0;
    bool isspecial=true;
    vector<pair<int,string>> res;
    while(i<n){
        string tmp;
        if(str[i]!='%'){
            if(isspecial){
                res.push_back(make_pair(1,str[i]));
                ++i;
            }else{
                tmp.push_back(str[i]);
                ++i;
                isspecial=false;
                continue;
            }
        }else{
            if(isspecial){

            }else{
                
            }
        }
    }
}

int main(){
    string input="[%c] [%p] %t %F %f:%l %m%n";
    vector<pair<int,string>> output=parser(input);
    for(auto str:output) cout<<str->first<<" "<<str->second<<endl;
}