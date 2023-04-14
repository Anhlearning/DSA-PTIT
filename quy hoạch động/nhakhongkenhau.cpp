#include<bits/stdc++.h>
using namespace std;
using ll=long long; 



int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        ll a[n+3];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        ll dp[n+5];
        memset(dp,0,sizeof(dp));
        dp[1]=a[1];
        for(int i=2;i<=n;i++){
            dp[i]+=max(dp[i-2]+a[i],dp[i-1]);
        }
        cout<<*max_element(dp+1,dp+n+1)<<endl;
    }
}