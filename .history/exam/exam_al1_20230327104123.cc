#include <iostream>
#include <functional>
#include <set>
#include <vector>

using namespace std;

int main(){
    vector<string> s={"abc","bc","ccba"};
    set<string> se;
    int n=s.size();
    vector<int> mark(26,0);

    string res;
    function<void(int,int)> dfs=[&](int row,int col){
    
        if(mark[s[row][col]-'a']==1) return;
        mark[s[row][col]-'a']=1;
        res+=s[row][col];

        if(row==n-1){
            se.insert(res);
            res.pop_back();
            mark[s[row][col]-'a']=0;
            return;
        }

        for(int i=0;i<s[row+1].size();++i){
            dfs(row+1,i);
        }

        res.pop_back();
        mark[s[row][col]-'a']=0;
    };
    dfs(0,0);
    for(auto ss:se) cout<<ss<<endl;
    cout<<se.size()<<endl;
    return 0;
}