#include<bits/stdc++.h>
using namespace std;
int m,n,k,a[10000],ok;
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
    if(i==0)ok=0;
    else {
        a[i]++;
        for(int j=i+1;j<=k;j++){
            a[j]=a[j-1]+1;
        }
    }
}
int main() {
        cin>>m>>k;
        int x[m+1000];
        set<int>se;
        for(int i=1;i<=m;i++){
            cin>>x[i];
            se.insert(x[i]);
        }
        n=se.size();
        vector<int>v;
        for(auto it:se){
            v.push_back(it);
        }
        ktao();
        ok=1;
        while(ok){
        for(int i=1;i<=k;i++){
            cout<<v[a[i]-1];
        }
        cout<<endl;
        sinh();
    }
    cout<<endl;
}
    
   
