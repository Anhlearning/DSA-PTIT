#include<bits/stdc++.h>

using namespace std;
using ll=long long ;
ll f[50];
void ktao(){
    f[0]=1;
    f[1]=1;
    for(int i=2;i<=45;i++){
        f[i]=f[i-2]+f[i-1];
    }
}
int find(int n, ll k){
    if(n==0) return 1;
    if(n==1) return 0;
    if(k<=f[n-2]) return find(n-2,k);
    else return find(n-1,k-f[n-2]);
}
int main(){
    int tc;
    cin>>tc;
    ktao();
    while(tc--){
        int n;
        ll k;
        cin>>n>>k;
        ll res=0;
        for(int i=1;i<=k;i++){
            if(find(n,i)==1){
                res++;
            }
        }
        cout<<res<<endl;
    }
}