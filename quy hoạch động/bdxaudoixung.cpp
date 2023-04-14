#include<bits/stdc++.h>
using namespace std;
using ll=long long; 

ll mod =1e9+7;


int main(){
    int tc;
    cin>>tc;
    while(tc--){
       string s;
       cin>>s;
       int n=s.size();
       s=" "+s;
       int dp[n+5][n+5];
       memset(dp,0,sizeof(dp));
       for(int i=1;i<=n;i++){
            dp[i][i]=1;
       }
       for(int len=2;len<=n;len++){
            for(int i=1;i<=n-len+1;i++){
                int j=i+len-1;
                if(s[i]==s[j]&&len==2){
                    dp[i][j]=2;
                }
                else if(s[i]==s[j]){
                    dp[i][j]=dp[i+1][j-1]+2;
                }
                else {
                    dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
                }
            }
       }
       cout<<n-dp[1][n]<<endl;
    }
}