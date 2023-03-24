#include <iostream>
#include <vector>
#include <utility>
#include <string>
using namespace std;


vector<pair<int,string> > parser(string str){
    int n=str.size();
    int i=0;
    bool isspecial=false;
    vector<pair<int,string> > res;
    string tmp;
    while(i<n){
        if(str[i]!='%'){
            if(isspecial){
                res.push_back(make_pair(1,to_string(str[i])));
                isspecial=false;
                ++i;
            }else{
                tmp.push_back(str[i]);
                ++i;
            }
        }else{
            {
                res.push_back(make_pair(0,tmp));
                isspecial=false;
                tmp="";
                ++i;
            }
        }
    }
    return res;
}

int main(){
    string input="[%c] [%p] %t %F %f:%l %m%n";
    vector<pair<int,string> > output=parser(input);
    for(auto str:output) cout<<str.first<<" "<<str.second<<endl;
}