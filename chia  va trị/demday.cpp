#include<bits/stdc++.h>

using namespace std;
 using ll=long long ;
ll mod =123456789;
ll sqr(ll a){
    return a*a;
}
ll Mul(ll n){
    if(n==0) return 1;
    if(n==1) return 2;
    ll tmp=Mul(n/2);
    if(n%2==0) return (tmp%mod*tmp%mod)%mod;
    else return 2*(sqr(tmp)%mod)%mod;
}

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        ll n;
        cin>>n;
        cout<<Mul(n-1)<<endl;
    }
}