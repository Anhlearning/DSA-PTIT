#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
ll f[46];
void init(){
    f[0]=1;
    f[1]=1;
    for(int i=2;i<=45;i++){
        f[i]=f[i-2]+f[i-1];
    }
}
int chiadetri(ll n, ll k){
    if(n==0) return 0;
    if(n==1) return 1;
    if(k>f[n-2]){
        return f[n-1]-chiadetri(n-2,f[n]-k);
    }
    else {
        return chiadetri(n-2,k);
    }
}

int main(){
    int tc;
    cin>>tc;
    init();
    while(tc--){
        ll n,k;
        cin>>n>>k;
        cout<<chiadetri(n,k)<<endl;
    }
}