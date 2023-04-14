#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        string s;
        cin>>s;
        int n=s.size();
        s='x'+s;
        long long dp[n+3]={0};
        long long sum=0;
        for(int i=1;i<=n;i++){
            dp[i]=(s[i]-'0')*i+dp[i-1]*10;
            sum+=dp[i];
        }
        cout<<sum<<endl;
    }
}