#include<bits/stdc++.h>
using namespace std;

int find(int a[],int l,int r,int x){
    int res=-1;
    while(l<=r){
        int m=(l+r)/2;;
        if(a[m]==x){
            res=m;
            return res;
        }
        else if(a[m]>x){
            r=m-1;
        }
        else l=m+1;
    }
    return res;
}



int main(){
   int n;
   cin>>n;
   int a[n+3];
   int d[100009]={0};
   for(int i=1;i<=n;i++) {
        cin>>a[i];
    }
   for(int i=1;i<=n;i++){
         d[a[i]]=1;
         if(d[a[i]-1]){
            d[a[i]]=d[a[i]-1]+1;
         }
   }
    int res=-1e9;
    for(int i=0;i<=100005;i++){
        res=max(res,d[i]);
    }
    cout<<n-res<<endl;
}