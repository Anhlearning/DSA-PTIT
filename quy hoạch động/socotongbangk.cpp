#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;
int dp[105][50005];
void tinh(){
    for(int i=1;i<10;i++) dp[1][i]=1;
    for(int i=1;i<=100;i++){
        for(int j=1;j<=50000;j++){
            for(int k=0;k<=9;k++){
                if(k<=j){
                    dp[i][j]=(dp[i][j]+dp[i-1][j-k])%mod;
                }
                else break;
            }
        }
    }
}




int main(){
    int tc;
    cin>>tc;
    tinh();
    while(tc--){
        int n,k;
        cin>>n>>k;
        cout<<dp[n][k]<<endl;
    }
}