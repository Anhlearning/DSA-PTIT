#include<bits/stdc++.h>
using namespace std;
using ll=long long; 

int f[1000006];
int dp[1000007];
void sang(){
    memset(f,1,sizeof(f));
    f[0]=f[1]=0;
    for(int i=2;i<=1000006;i++){
        if(f[i]){
            dp[i]=i;
        for(int j=i*2;j<=1000006;j+=i){
                f[j]=0;
                dp[j]=max(dp[j],i);
            }
        }
    }
}




int main(){
    int tc;
    cin>>tc;
    sang();
    for(int i=0;i<=50;i++){
            cout<<dp[i]<<" ";
        }
  
    while(tc--){
        int l,r;
        cin>>l>>r;
        long long sum=0;
        while(l<=r){
           if(l!=r){
                sum=(1ll)*sum+dp[l]+dp[r];
           }
           else sum=(1ll)*sum+dp[l];
           l++,r--;
        }
        cout<<sum<<endl;
    }
}