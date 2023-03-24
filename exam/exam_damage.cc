#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int damage(int N, int M, vector<int>& Skills){
    vector<vector<int>> dp(N,vector<int>(M+1,INT_MAX));

    for(int i=0;i<N;++i){
        dp[i][M-Skills[i]]=1;
    }

    
    for(int j=M;j>0;--j){
        int tmp=INT_MAX;
        for(int i=0;i<N;++i){
            tmp=min(tmp,dp[i][j]);
            for(int t=0;t<N;++t){
                if(j<Skills[t] || tmp==INT_MAX) continue;
                dp[t][j-Skills[t]]=tmp+1;
            }      
        }
    }   

    int res=INT_MAX;
    for(int i=0;i<N;++i){
        res=min(res,dp[i][Skills[i]]);
    }
    return res+1;
}

int main(){
    int M=15;//target
    vector<int> Skills={1,2,6};
    int N=Skills.size();

    int res=damage(N,M,Skills);

    cout<<res<<endl;
}