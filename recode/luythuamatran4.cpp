#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
ll n,k,a[15][15],b[15][15];
ll mod=1e9+7;
void mul(ll a[15][15], ll b[15][15]){
    ll tmp[15][15];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            ll res=0;
            for(int k=1;k<=n;k++){
                res+=(a[i][k]*b[k][j])%mod;
                res%=mod;
            }
            tmp[i][j]=res;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            a[i][j]=tmp[i][j];
        }
    }
}
void pow1(ll a[15][15],ll n){
    if(n<=1) return ;
    pow1(a,n/2);
    mul(a,a);
    if(n%2==1) mul(a,b);
}
void solve(){
     cin>>n>>k;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>a[i][j];
                b[i][j]=a[i][j];
            }
        }
    pow1(a,k);
    ll res=0;
    for(int i=1;i<=n;i++){
        res+=a[1][i];
        res%=mod;
    }
    cout<<res<<endl;
}


int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}
