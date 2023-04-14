#include<bits/stdc++.h>
using namespace std;
int main(){
 int tc;
 cin>>tc;
 while(tc--){
     int n;
     cin>>n;
     int a[n+5]={0};
     for(int i=1;i<=n;i++) cin>>a[i];
     int idx=0;
     int dem=0;
     int res=-1e9;
     for(int i=1;i<=n-1;i++){
        if(a[i+1]>a[i]){
            if(a[i-1]>=a[i]){
                res=max(res,dem);
                dem=0;
            }
            dem++;
        }
        else if(a[i+1]<a[i]){
            dem++;
        }
     }
     cout<<max(res,dem)+1<<endl;
 }
}