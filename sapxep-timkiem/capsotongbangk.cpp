#include<bits/stdc++.h>
using namespace std;
int k;

int main(){
 int tc;
 cin>>tc;
 while(tc--){
    int n;
    cin>>n;
    int a[n+5],b[n+5];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+n);
    int l=0;
    int r=n-1;
    int l1=n;
    int r1=0;
    while(l<=r){
        if(a[l]!=b[l]){
            l1=min(l1,l);
        }
        if(a[r]!=b[r]){
            r1=max(r1,r);
        }
        l++;
        r--;
    }
    cout<<l1+1<<" "<<r1+1<<endl;
 }
}