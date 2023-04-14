#include<bits/stdc++.h>

using namespace std;

using ll=long long ;
ll mod =1e9+7;
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
  
    while(1){
        ll a,b;
        cin>>a>>b;
        if(a==0&&b==0) return 0;
        cout<<powbinary(a,b,mod)<<endl;
    }
}

