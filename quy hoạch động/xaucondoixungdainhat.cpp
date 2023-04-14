#include<bits/stdc++.h>
using namespace std;


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
        int res=1;
        for(int len=2;len<=n;len++){
            for(int i=1;i<=n-len+1;i++){
                int j=i+len-1;
                if(len==2&&s[i]==s[j]){
                    dp[i][j]=1;
                }
                else {
                    dp[i][j]=(dp[i+1][j-1])&&(s[i]==s[j]);
                }
                if(dp[i][j]==1){
                    res=max(res,len);
                }
            }
        }
        cout<<res<<endl;
    }
}