#include<bits/stdc++.h>
using namespace std;
using ll =long long ;
int find_last(ll a[],int l,int r,int x){
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
        int  n,k;
        cin>>n>>k;
        ll a[n];
        for(ll &x:a) cin>>x;
        sort(a,a+n);
        int dem=0;
        for(int i=0;i<n;i++){
            int res=find_last(a,i+1,n-1,k+a[i]);
            if(res!=-1){
                dem+=res-i;
            }
        }
        cout<<dem<<endl;
    }
}