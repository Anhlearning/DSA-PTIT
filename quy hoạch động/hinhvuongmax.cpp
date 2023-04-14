#include<bits/stdc++.h>
using namespace std;
using ll=long long; 



int main(){
    int tc;
    cin>>tc;
    while(tc--){
      int n,m;
      cin>>n>>m;
      int a[n+3][m+3];
      int dp[n+5][m+3];
      memset(dp,0,sizeof(dp));
      for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
      }
      int ans=0;
      for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==1||j==1){
                dp[i][j]=a[i][j];
            }
            else {
            if(a[i][j]==1){
                dp[i][j]=min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]})+1;
            }
            else {
                dp[i][j]=0;
            }
            }
            ans=max(dp[i][j],ans);
        }
        cout<<endl;
      }
      cout<<ans<<endl;
    }
}