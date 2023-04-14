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
        cin>>n;
        ok=1;
        ktao();
        vector<string>v;
        while(ok){
            for(int i=1;i<=n;i++){
                g[i]=a[i] xor a[i-1];
            }
            for(int i=1;i<=n;i++){
                cout<<g[i];
            }
            cout<<" ";
            sinh();
        }
        cout<<endl;
   }
}
