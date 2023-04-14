#include<bits/stdc++.h>
using namespace std;


int main(){
 int tc;
 cin>>tc;
 while(tc--){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int &x:a) cin>>x;
    sort(a,a+n);
    int ok=0;
    for(int i=0;i<n;i++){
        int sum=a[i];
        int l=i+1,r=n-1;
        while(l<r){
            if(sum+a[l]+a[r]>k){
                r--;
            } 
            else if(sum+a[l]+a[r]<k){
                l++;
            }
            else {
             ok=1;
             cout<<"YES"<<endl;
             break;
            }
        }
        if(ok==1) break;
    }
    if(ok==0) cout<<"NO"<<endl;
 }
}
