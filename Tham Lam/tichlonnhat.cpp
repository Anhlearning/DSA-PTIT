#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    int a[10005];
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1,greater<int>());
    int res1=a[1]*a[2];
    int res2=a[n]*a[n-1];
    int res3=a[1]*a[2]*a[3];
    int res4=a[1]*a[n-1]*a[n];
    int max_val=-1e9;
    max_val=max({res1,res2,res3,res4,max_val});
   cout<<max_val;
}