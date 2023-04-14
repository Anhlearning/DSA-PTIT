#include<bits/stdc++.h>
using namespace std;
int n,a[101],ok=1;
void ktao(){
    for(int i=1;i<=n;i++){
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
        int m;
        cin>>m;
    for(int i=2;i<=m;i+=2){
        n=i/2;
        ktao();
        ok=1;
        while(ok){
        string s="";
        for(int i=1;i<=n;i++){
            s+=to_string(a[i]);
        }
        string res=s;
        reverse(s.begin(),s.end());
        cout<<res+s<<" ";
        sinh();
     }
    }
    cout<<endl;
   }
}