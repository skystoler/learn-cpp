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
        
        if(row==n){
            mark[s[row][col]-'a']=0;
            se.insert(res);
            return;
        }
        for(auto ch:s[idx]){
            if(mark[ch-'a']==1) continue;
            else{
                res.push_back(ch);
                mark[ch-'a']=1;
                dfs(idx+1);
                mark[ch-'a']=0;
                res.pop_back();
            }
        }
    };
    dfs(0,0);
    cout<<se.size()<<endl;
    return 0;
}