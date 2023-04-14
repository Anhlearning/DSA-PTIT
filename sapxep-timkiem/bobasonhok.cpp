#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
int last_pos(ll a[],int l,int r,int x){
    int res=-1;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]<x){
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
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for(ll &x:a) cin>>x;
    sort(a,a+n);
    int ok=0;
    long long dem=0;
    for(int i=0;i<n;i++){
        int r=n-1;
        int l=i+1;
        ll sum=a[i];
        while(l<=r){
            if(sum+a[l]+a[r]<k){
                dem+=r-l;
                l++;
            }
            else r--;
        }
    }
    cout<<dem<<endl;
 }
}
