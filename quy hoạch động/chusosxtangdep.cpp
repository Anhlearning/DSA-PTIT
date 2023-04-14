#include <bits/stdc++.h>
using namespace std; 
    
const int mod = 1e9 + 7; 
int dp[105][105]; 
int dfs(int n, int k) { 
    if(n==1){
        dp[n][k]=1;
        return 1;
    }
    if(dp[n][k]!=-1) return dp[n][k];
    int res=0;
    for(int i=k;i<=9;i++){
        res+=dfs(n-1,i)%mod;
    }
    dp[n][k]=res;
    return dp[n][k];
} 
int main() {
     int t, n; 
     cin >> t; 
     while (t--) { 
            cin>>n;
            for(int i=0;i<=n;i++){
                for(int j=0;j<=9;j++){
                    dp[i][j]=-1;
                }
            }
            int res=0;
            for(int i=1;i<=9;i++){
                res+=dfs(n,i)%mod;
            }
     }
        return 0;
 }