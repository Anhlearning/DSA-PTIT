#include<bits/stdc++.h>
using namespace  std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        string s1,s2;
        cin>>s1>>s2;
        int n1=s1.size();
        int n2=s2.size();
        s1=" "+s1;
        s2=" "+s2;
        int dp[n1+5][n2+5];
        for(int i=0;i<=n1;i++){
            dp[0][i]=i;
        }
        for(int i=0;i<=n2;i++){
            dp[i][0]=i;
        }
        for(int i=1;i<=n1;i++){
            for(int j=1;j<=n2;j++){
                if(s1[i]==s2[j]){
                    dp[i][j]=dp[i-1][j-1];
                }
                else {
                    dp[i][j]=min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]})+1;
                }
            }
        }
        cout<<dp[n1][n2]<<endl;
    }
}