#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
 int tc;
 cin>>tc;
 while(tc--){
    ll n,m,k;
    cin>>n>>m>>k;
    ll a[n],b[m],c[k];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++) cin>>b[i];
    for(int i=0;i<k;i++) cin>>c[i];
    int ok=0;
    ll l1=0,l2=0,l3=0;
    while(l1<n&&l2<m&&l3<k){
        if(a[l1]==b[l2]&&a[l1]==c[l3]){
            cout<<a[l1]<<" ";
            ok=1;
            l1++;
            l2++;
            l3++;
        }
        else if(a[l1]<b[l2]){
            l1++;
        }
        else  if(b[l2]<c[l3]){
            l2++;
        }
        else l3++;
    }
        if(ok==0)cout<<-1;
        cout<<endl;
     }
}

