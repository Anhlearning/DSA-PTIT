#include<bits/stdc++.h>

using namespace std;
int a[10000],g[10000],ok=1,n,k;
void ktao(){
    for(int i=1;i<=k;i++){
        a[i]=0;
    }
}
void sinh(){
    int i=n;
    while(a[i]==1&&i>=1){
        a[i]=0;
        i--;
    }
    if(i==0) ok=0;
    else {
        a[i]=1;
    }
}

int main(){
   int tc;
   cin>>tc;
   while(tc--){
       string s;
       cin>>s;
        string bin="";
        bin=s[0];
        for(int i=1;i<s.size();i++){
                int n=bin.size()-1;
                if(bin[n]!=s[i]){
                    bin+="1";
                }
                else {
                    bin+="0";
                }
        }
        cout<<bin<<endl;
   }
}
