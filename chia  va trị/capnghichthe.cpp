#include<bits/stdc++.h>
using namespace std;

using ll=long long;
int mod=1e9+7;
ll merge(ll a[],int l , int m , int r){
    vector<ll>trai(a+l,a+m+1);
    vector<ll>phai(a+m+1,a+r+1);
     ll ans=0;
    int i=0,j=0;
    while(i<trai.size()&&j<phai.size()){
            if(trai[i]<=phai[j]){
                a[l]=trai[i];
                i++;
                l++;
            }
            else {
                a[l]=phai[j];
                ans+=trai.size()-i;
                j++;
                l++;
            }
    }
    while(i<trai.size()){
        a[l++]=trai[i++];
    }
    while(j<phai.size()){
        a[l++]=phai[j++];
    }
    return ans;
}
ll mergesort(ll a[],int l , int r){
    if(l<r){
        int m=(l+r)/2;
        ll tmp1=mergesort(a,l,m);
        ll tmp2=mergesort(a,m+1,r);
        return tmp1+tmp2+merge(a,l,m,r);
    }
    return 0;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        ll a[n];
        for(ll &x: a) cin>>x;
        cout<<mergesort(a,0,n-1)<<endl;
    }
}