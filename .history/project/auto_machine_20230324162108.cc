#include <iostream>
#include <vector>
#include <utility>
#include <string>
using namespace std;


vector<pair<int,string>> parser(string str){
    int i=0;
    bool isspecial=false;
    vector<pair<int,string>> res;
    string tmp;
    while(i<str.size()){
        string c=string(1,str[i]);
        cout<<c<<endl;
        if(c!="%"){
            if(isspecial){
                res.push_back(make_pair(1,c));
                //cout<<1<<" "<<c<<endl;
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
                //cout<<1<<" "<<c<<endl;
                isspecial=false;
                ++i;
                continue;
            }else{
                if(!tmp.empty()){
                    res.push_back(make_pair(0,tmp));
                    //cout<<0<<" "<<tmp<<endl;
                }
                isspecial=true;
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