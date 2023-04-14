#include<bits/stdc++.h>

using namespace std;

using ll=long long;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
    cin>>n;
    int a[n];
    ll p[n];
    memset(p,0,sizeof(p));
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    p[0]=a[0];
    for(int i=1;i<n;i++){
        p[i]=p[i-1]+a[i];
    }
    int ok=0;
    for(int i=1;i<n;i++){
        if(p[i-1]==p[n-1]-p[i]){
            cout<<i+1<<endl;
            ok=1;
            break;
        }
    }
    if(ok==0) cout<<-1<<endl;
    }
}