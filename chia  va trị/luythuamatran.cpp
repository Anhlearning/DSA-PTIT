#include<bits/stdc++.h>

using namespace std;
using ll =long long ;
int n;
long long k;
long long a[10][10],b[10][10];
ll mod=1e9+7;
void mul(ll x[10][10],ll y[10][10]){
    ll tmp[10][10];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ll res=0;
            for(int k=0;k<n;k++){
                res+=x[i][k]*y[k][j]%mod;
                res%=mod;
            }
            tmp[i][j]=res;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=tmp[i][j];
        }
    }
}
void pow1(ll a[10][10],int n){
    if(n<=1) return;
    pow1(a,n/2);
    mul(a,a);
    if(n%2==1) mul(a,b);
}
void solve(){
    cin>>n>>k;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            b[i][j]=a[i][j];
        }
    }
    pow1(a,k);
    ll cnt=0;
    for(int i=0;i<n;i++){
       cnt+=a[i][n-1];
       cnt%=mod;
    }
    cout<<cnt<<endl;

}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
      solve();
    }   
}