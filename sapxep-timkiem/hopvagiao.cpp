#include<bits/stdc++.h>
using namespace std;

int main(){
 int tc;
 cin>>tc;
 while(tc--){
    int n,m;
    cin>>n>>m;
    int a[n+5],b[n+5];
    set<int>se1;
    set<int>se2;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        se1.insert(a[i]);
    }
    for(int i=1;i<=m;i++){
        cin>>b[i];
        se1.insert(b[i]);
        se2.insert(b[i]);
    }
    for(auto it:se1){
        cout<<it<<" ";
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        if(se2.find(a[i])!=se2.end()){
            cout<<a[i]<<" ";
        }
    }
    cout<<endl;
    
 }
}