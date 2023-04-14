#include<bits/stdc++.h>
using namespace std;
using ll=long long; 



int main(){
    int tc;
    cin>>tc;
    while(tc--){
    int n,s;
    cin>>n>>s;
    int a[n];
    for(int &x:a) cin>>x;
    vector<bool>dp(s+1,false);
    dp[0]=true;
    for(int i=0;i<n;i++){
        for(int j=s;j>=a[i];j--){
            if(dp[j-a[i]]){
                dp[j]=true;
            }
        }
    }
    if(dp[s]==true) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
}