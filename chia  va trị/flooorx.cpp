#include<bits/stdc++.h>

using namespace std;

using ll=long long ;
int find(ll a[],int l,int r,ll x){
    int res=-1;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]<=x) {
           res=m;
           l=m+1;
        }
        else r=m-1;
    }
    return res;
}


int main(){
   int tc;
   cin>>tc;
   while(tc--){
       int n;
       ll x;
       cin>>n>>x;
       ll a[n+5];
       for(int i=0;i<n;i++) cin>>a[i];  
    int res=find(a,0,n-1,x);
        if(res!=-1) cout<<res+1<<endl;
        else cout<<-1<<endl;
   }
}