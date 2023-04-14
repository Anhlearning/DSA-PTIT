#include<bits/stdc++.h>
using namespace std;
using ll=long long; 



int main(){
    int tc;
    cin>>tc;
    while(tc--){
        ll n,k;
        cin>>n>>k;
        ll a[n+3];
        ll p[n+3];
        memset(p,0,sizeof(p));
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=n;i++){
            p[i]=p[i-1]+a[i];
        }
        int c=0;
        int l=1,r=1;
        while(l<=r&&r<=n&&l>=0){
            if(p[r]-p[l-1]<k){
                r++;
            }
            else if(p[r]-p[l-1]>k){
                l++;
            }
            else {
                c=1;
                cout<<"YES"<<endl;
                break;
            }
        }
        if(c==0) cout<<"NO"<<endl;
    }
}