#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
int n;
ll a[2][2],b[2][2];
ll mod=1e9+7;
void pmatrix(ll x[2][2],ll y[2][2]){
    int tmp[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            int res=0;
            for(int k=0;k<2;k++){
                res+=x[i][k]*y[k][j]%mod;
                res%=mod;
            }
            tmp[i][j]=res;
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            a[i][j]=tmp[i][j];
        }
    }
}
void mul(ll a[2][2],int n){
    if(n<=1) return ;
    mul(a,n/2);
    pmatrix(a,a);
    if(n%2==1) pmatrix(a,b);
}
void solve(){
    cin>>n;
    a[0][0]=1,a[1][0]=1,a[0][1]=1,a[1][1]=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            b[i][j]=a[i][j];
        }
    }
    mul(a,n);
    cout<<a[1][0]<<endl;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}