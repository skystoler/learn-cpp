#include <iostream>
#include <vector>

using namespace std;

int damage(int N, int M, vector<int>& Skills){
    vector<vector<int>> dp(N,vector<int>(M+1,INT_MAX));

    for(int i=0;i<N;++i){
        dp[i][M-Skills[i]]=1;
    }

    for(int i=0;i<N;++i){
        for(int j=0;j<M+1;++j){
            dp[i][j]=dp[i][j+Skills[i]]+1;
        }
    }

}

int main(){
    int M=15;//target
    vector<int> Skills={1,2,5};
    int N=Skills.size();

    int res=damage(N,M,Skills);

    cout<<res<<endl;
}