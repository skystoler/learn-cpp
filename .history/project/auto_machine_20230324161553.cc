#include <iostream>
#include <vector>
#include <utility>
#include <string>
using namespace std;


vector<pair<int,string>> parser(string str){
    int n=str.size();
    int i=0;
    bool isspecial=false;
    vector<pair<int,string>> res;
    string tmp;
    while(i<n){
        string c=to_string(str[i]);
        if(c!="%"){
            if(isspecial){
                res.push_back(make_pair(1,c));
                isspecial=false;
                ++i;
                continue;
            }else{
                tmp+=c;
                ++i;
                continue;
            }
        }else{
            if(isspecial){
                res.push_back(make_pair(1,c));
                isspecial=false;
                ++i;
                continue;
            }else{
                if(!tmp.empty()){
                    res.push_back(make_pair(0,tmp));
                }
                isspecial=false;
                tmp.clear();
                ++i;
                continue;
            }
        }
    }
    return res;
}

int main(){
    string input="[%c] [%p] %t %F %f:%l %m%n";
    vector<pair<int,string>> output=parser(input);
    for(auto str:output) cout<<str.first<<" "<<str.second<<endl;
}