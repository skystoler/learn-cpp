#include <iostream>
#include <vector>

using namespace std;

bool package(vector<int>& weight,vector<int>& value,int max_weight){
    int n=weight.size();
    vector<vector<int>> dp(n,vector<int>(max_weight+1,0));
    for(int i=0;i<n;++i){
        dp[i][0]=0;
    }
    for(int i=weight[0];i<max_weight+1;++i){
        dp[0][i]=value[0];
    }
        
    for(int i=1;i<n;++i){
        for(int j=1;j<max_weight+1;++j){
           if()
        }
    }

    return dp[n-1][max_weight-1];
}

int main(){
    vector<int> weight={1,3,5,9,7,6};
    vector<int> value={10,15,20,25,30,35};
    int max_weight=15;
    package(weight,value,max_weight);
}