#include<bits/stdc++.h>

using namespace std;

using ll=long long ;
ll cnt=1e9+7;
ll powbinary(ll a,ll b,ll tmp){
    ll res=1;
    while(b){
        if(b%2==1){
            res*=a;
            res%=tmp;
        }
        a*=a;
        a%=tmp;
        b/=2;
    }
    return res;
}


int main(){
    int tc;
    cin>>tc;
    while(tc--){
        ll a,b;
        cin>>a>>b;
        cout<<powbinary(a,b,cnt)<<endl;
    }
}