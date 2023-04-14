#include<bits/stdc++.h>
using namespace std;



int main(){
    int c,n;
    cin>>c>>n;
    int w[n];
    int s=0;
    for(int i=0;i<n;i++){
        cin>>w[i];
        s+=w[i];
    }
    vector<bool>dp(s+1,false);
    dp[0]=true;
    for(int i=0;i<n;i++){
        for(int j=s;j>=w[i];j--){
            if(dp[j-w[i]]){
                dp[j]=true;
            }
        }
    }
    for(int i=s;i>=0;i--){
        if(c>=i&&dp[i]){
            cout<<i;
            return 0;
        }
    }
}