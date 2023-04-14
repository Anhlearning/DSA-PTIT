#include<bits/stdc++.h>
using namespace std;
using ll=long long; 

ll mod =1e9+7;


int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,k;
        cin>>n>>k;
        ll f[n+5]={0};
        f[1]=f[0]=1;
        for(int i=2;i<=n;i++){
            for(int j=1;j<=min(i,k);j++){
                f[i]+=f[i-j];
                f[i]%=mod;
            }
        }
        cout<<f[n]<<endl;
    }
}