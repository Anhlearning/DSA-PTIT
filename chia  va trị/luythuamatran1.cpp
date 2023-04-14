#include<bits/stdc++.h>

using namespace std;
using ll=long long ;
int n;
ll k;
ll a[15][15],b[15][15];
ll mod=1e9+7;
void  val(ll x[15][15],ll y[15][15]){
    ll tmp[15][15];
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
void mol(ll a[15][15],ll k){
    if(k<=1) return ;
    mol(a,k/2);
    val(a,a);
    if(k%2==1) val(a,b);
}
void solve(){
    cin>>n>>k;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            b[i][j]=a[i][j];
        }
    }
    mol(a,k);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}