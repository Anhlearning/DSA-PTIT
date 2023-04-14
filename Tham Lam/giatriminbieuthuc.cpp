#include<bits/stdc++.h>

using namespace std;

using ll=long long ;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        ll a[n],b[n]; 
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        long long ans=0;
        for(int i=0;i<n;i++){
            ans+=a[i]*b[n-i-1];
        }
        cout<<ans<<endl;
   }
}