#include <iostream>
#include <vector>

using namespace std;

int package(vector<int>& weight,vector<int>& value,int max_weight){
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
           if(j<weight[i]) dp[i][j]=dp[i-1][j]; //背包放不下该重量
           else dp[i][j]=max(dp[i-1][j],dp[i-1][j-weight[i]]+value[i]) //放得下，但是选择放不放进去
        }
    }

    return dp[n-1][max_weight-1];
}

int main(){
    vector<int> weight={1,3,5,9,7,6};
    vector<int> value={10,15,20,25,30,35};
    int max_weight=15;
    int res=package(weight,value,max_weight);
    cout<<res<<endl;
    return 0;
}