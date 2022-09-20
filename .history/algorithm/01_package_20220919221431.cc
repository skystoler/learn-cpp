#include <iostream>
#include <vector>

using namespace std;

bool package(vector<int>& weight,vector<int>& value,int target){
    int n=nums.size();
    vector<vector<int>> dp(n,vector<int>(target+1,0));
    for(int i=0;i<n;++i){
        dp[i][0]=0;
    }
    for(int i=0;i<target=1;++i){
        if(i==nums[i]) dp[0][i]=1;
    }
    for(int i)

    return dp[n-1][target-1];
}

int main(){
    vector<int> weight={1,3,5,9,7,6};
    vector<int> value={10,15,20,25,30,35};
    int max_weight=15;
    package(weight,value,max_weight);
}