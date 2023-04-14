#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        for(int &x:a)cin>>x;
        for(int &x:b) cin>>x;
        sort(a,a+n);
        sort(b,b+m);
        int l1=0,l2=0;
        while(l1<n&&l2<m){
            if(a[l1]<=b[l2]){
                cout<<a[l1]<<" ";
                l1++;
            }
            else {
                cout<<b[l2]<<" ";
                l2++;
            }
        }
        while(l1<n) {
            cout<<a[l1]<<" ";
            l1++;
        }
        while(l2<m) {
            cout<<b[l2]<<" ";
            l2++;
        }
        cout<<endl;
    }
}