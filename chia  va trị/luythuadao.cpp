#include<bits/stdc++.h>

using namespace std;

using ll=long long ;
ll cnt=1e9+7;
ll powbinary(ll a,ll b){
    if(b==1)return a%cnt;
    ll tmp=powbinary(a,b/2);
    if(b%2==0) return (tmp*tmp%cnt);
    return (tmp*tmp%cnt)*a%cnt;
}


int main(){
    int tc;
    cin>>tc;
    while(tc--){
       ll n;
       cin>>n;
       ll k=0,m=n;
       while(m){
        k=k*10+m%10;
        m/=10;
       }
       cout<<powbinary(n,k)<<endl;
    }
}