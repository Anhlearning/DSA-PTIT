#include<bits/stdc++.h>

using namespace std;
int check(int n){
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,k;
        cin>>n>>k;
        int a[n];
        map<int,int>mp;
        for(int &x:a){
            cin>>x;
            mp[x]++;
        }
        long long ans=0;
        for(int i=0;i<n;i++){
            ans+=mp[k-a[i]];
            if(a[i]*2==k){
                ans--;
            }
        }
        cout<<ans/2<<endl;
    }
}
