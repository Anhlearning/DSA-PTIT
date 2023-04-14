#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        long long  a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        int ok=0;
        for(int i=n-1;i>=0;i--){
            int l=0;
            int r=i-1;
            while(l<r){
                long long tmp =a[l]*a[l]+a[r]*a[r];
                if(tmp>a[i]*a[i]){
                    r--;
                }
                else if(tmp<a[i]*a[i]) l++;
                else {
                    ok=1;
                    cout<<"YES"<<endl;
                    break;
                }
            }
        }
        if(ok==0)cout<<"NO"<<endl;
    }
}