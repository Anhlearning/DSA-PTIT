#include<bits/stdc++.h>

using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,m;
        cin>>n>>m;
        long long a[n],b[m];
        for(long long &x:a) cin>>x;
        for(long long &x:b) cin>>x;
        sort(a,a+n);
        sort(b,b+n);
        long long res=a[n-1]*b[0];
        cout<<res<<endl;
    }
}