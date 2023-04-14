#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,s;
        cin>>n>>s;
        long long a[n];
        for(long long  &x:a) cin>>x;
        long long dp[s+10]={0};
        dp[0]=1;
        for(int i=1;i<=s;i++){
            for(int x:a){
                if(i>=x){
                    if(dp[i-x]){
                        dp[i]+=dp[i-x];
                        dp[i]%=mod;
                    }
                }
            }
        }
        cout<<dp[s]<<endl;
    }
}