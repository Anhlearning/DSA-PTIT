#include<bits/stdc++.h>

int timkiem(int a[ ],int l,int r,int x){
    int res=-1;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]==x){
            return 1;
        }
        else if(a[m]>x){
            r=m-1;
        }
        else l=m+1;
    }
    return -1;
}

using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int &x:a) cin>>x;
        for(int i=0;i<n;i++){
            if(a[i]==k) {
                cout<<i+1<<endl;
                break;
            }
        }
    }
}