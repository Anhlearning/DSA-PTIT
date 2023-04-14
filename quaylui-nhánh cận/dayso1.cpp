#include<bits/stdc++.h>
using namespace std;

void Try(int a[ ],int n){
    if(n>0){ 
        cout<<"[";
    for(int i=0;i<n;i++){
        cout<<a[i];
        if(i!=n-1){
            cout<<" ";
        }
    }
    cout<<"]";
    
    for(int i=0;i<n-1;i++){
        a[i]=a[i]+a[i+1];
    }
    Try(a,n-1);
    }
}


int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        Try(a,n);
    }
}