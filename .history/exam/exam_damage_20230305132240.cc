#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int damage(int N, int M, vector<int>& Skills){
    vector<vector<int>> dp(N,vector<int>(M+1,INT_MAX));

    for(int i=0;i<N;++i){
        dp[i][M]=0;
    }

    for(int i=0;i<N;++i){
        for(int j=M;j>0;--j){
            for(int t=0;t<N;++t){
                dp[t][j-Skills[i]]=dp[i][j]+1;
            }      
        }
    }

    int res=INT_MAX;
    for(int i=0;i<N;++i){
        res=min(res,dp[i][0]);
    }
    return res;
}

int main(){
    int M=15;//target
    vector<int> Skills={1,2,5};
    int N=Skills.size();

    int res=damage(N,M,Skills);

    cout<<res<<endl;
}