#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,m;
        cin>>n>>m;
        long long  a[n+5][m+5];
        long long dp[n+5][m+5]={0};
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>a[i][j];
            }
        }
        dp[0][0]=a[0][0];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(i==1||j==1){
                    if(i==1){
                        dp[i][j]=dp[i][j-1]+a[i][j];
                    }
                    else if(j==1){
                        dp[i][j]=dp[i-1][j]+a[i][j];
                    }
                }
                else {
                    dp[i][j]=min({dp[i-1][j],dp[i-1][j-1],dp[i][j-1]})+a[i][j];
                }
            }
        }
        cout<<dp[n][m]<<endl;
    }
}