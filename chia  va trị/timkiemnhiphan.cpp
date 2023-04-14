#include<bits/stdc++.h>

using namespace std;

using ll=long long ;
int timkiem(int a[],int l , int r , int x){
    int res=-1;
    while(l<=r){
        int m=(l+r)/2;
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
    int tc;
    cin>>tc;
    while(tc--){
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int &x:a) cin>>x;
        int res=timkiem(a,0,n-1,x);
        if(res==-1) cout<<"NO"<<endl;
        else cout<<res+1<<endl;
    }
}