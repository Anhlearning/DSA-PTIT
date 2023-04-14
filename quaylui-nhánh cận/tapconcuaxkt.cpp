#include<bits/stdc++.h>
using namespace std;
int n,a[100],x[100];
string s;
vector<string>se;
void Try(int i){
    for(int j=x[i-1]+1;j<=n;j++){
        x[i]=j;
        for(int u=1;u<=i;u++){
            cout<<s[x[u]-1];
        }
        cout<<" ";
        if(i<n){
            Try(i+1);
        }
    }
}
int main(){
       int tc;
       cin>>tc;
       while(tc--){
           cin>>n>>s;
           Try(1);
       }
}