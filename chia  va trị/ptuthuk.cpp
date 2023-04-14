#include<bits/stdc++.h>

using namespace std;

using ll=long long ;



int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,m,k;
        cin>>n>>m>>k;
        int a[n],b[m],c[n+m]={0};
        for(int &x:a) cin>>x;
        for(int &x:b) cin>>x;
        int l=0,i=0,j=0;
        int x=0;
        while(i<n&&j<m){
            if(a[i]<=b[j]){
                c[l++]=a[i];
                i++; 
            }
            else {
                c[l++]=b[j];
                j++;
            }
        }
        while(i<n) {
           c[l++]=a[i];
            i++; 
        } 
        while(j<m) {
           c[l++]=b[j];
            j++; 
        }
        cout<<c[k-1]<<endl;
    }
}