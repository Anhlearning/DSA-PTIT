#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
int n,k,a[10000],ok;
void ktao(){
    for(int i=1;i<=k;i++){
        a[i]=i;
    }
}
void sinh(){
    int i=k;
    while(a[i]==n-k+i&&i>=1){
        --i;
    }
    if(i==0) ok=0;
    else {
    a[i]++;
    for(int j=i+1;j<=k;j++){
         a[j]=a[j-1]+1;
    }
    }
}
int main() {
    int tc;
    cin>>tc;
    while(tc--){
        cin>>n>>k;
        int x[n+5];
        ok=1;
        set<int>se;
        for(int i=1;i<=k;i++){
            cin>>x[i];
            se.insert(x[i]);
            a[i]=x[i];
        }
        int dem=se.size();
        sinh();
        if(ok==0) {
            cout<<k<<endl;
        }
        else {
        for(int i=1;i<=k;i++){
            se.insert(a[i]);
        }
        cout<<se.size()-dem<<endl;
        }
    }
    
    
   
}