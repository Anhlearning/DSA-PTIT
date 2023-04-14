#include<bits/stdc++.h>

using namespace std;



int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int dem=0;
        int a[n+5];
        int b[n+5];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(a,a+n);
        int ok=1;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]&&a[i]!=b[n-i-1]){
                ok=0;
                break;
            }
        }
        if(ok==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}