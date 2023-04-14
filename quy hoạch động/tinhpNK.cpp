#include<bits/stdc++.h>

using namespace std;
const long long mod=1e9+7;
long long dp[1005][1005];
int main(){
   int tc;
   cin>>tc;
   while(tc--){
        int n,k;
        cin>>n>>k;
        long long res=1;
        if(n<k){
            res=0;
        }
        else {
            for(int i=n-k+1;i<=n;i++){
                res*=i;
                res%=mod;
            }
        }
        cout<<res<<endl;
   }
}