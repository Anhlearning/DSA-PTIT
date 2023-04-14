#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int a[n];
        for(int &x :a) cin>>x;
        int ans=0;
        for(int i=1;i<n;i++){
            if(a[i]<a[i-1]){
                ans=i;
            }
        }
        cout<<ans<<endl;
    }
}