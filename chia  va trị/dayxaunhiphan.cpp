#include<bits/stdc++.h>

using namespace std;
using ll =long long ;
ll x[100];
void ktao(){
    x[0]=0;
    x[1]=1;
    for(int i=2;i<=93;i++){
        x[i]=x[i-1]+x[i-2];
    }
}
char find(int n, ll k){
    if(n==1) return '0';
    if(n==2) return '1';
    if(k<=x[n-2]){
        return find(n-2,k);
    }
    else {
        return find(n-1,k-x[n-2]);
    }
}

int main(){
    int tc;
    cin>>tc;
    ktao();
    while(tc--){
       int n,k;
       cin>>n>>k;
       cout<<find(n,k)<<endl;
    }
}