#include<bits/stdc++.h>
using namespace std;
using ll=long long; 



int main(){
    int tc;
    cin>>tc;
    while(tc--){
        string s1,s2;
        cin>>s1>>s2;
        int n=s1.size();
        int m=s2.size();
        int dp[n+5][m+5];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1]!=s2[j-1]){
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
                else {
                    dp[i][j]=dp[i-1][j-1]+1;
                }
            }
        }
        cout<<dp[n][m]<<endl;
    }
}