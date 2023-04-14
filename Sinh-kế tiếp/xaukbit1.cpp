#include<bits/stdc++.h>

using namespace std;
int a[10000],ok=1,n,k;
void ktao(){
    for(int i=1;i<=n;i++){
        a[i]=0;
    }
}
void sinh(){
    int i=n;
    while(a[i]==1&&i>=1){
        a[i]=0;
        --i;
    }
    if(i==0) ok=0;
    else  {
        a[i]=1;
    }
}
int check(){
    int dem=0;
    for(int i=1;i<=n;i++){
        if(a[i]==1){
            dem++;
        }
    }
    if(dem==k) return 1;
    else return 0;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        cin>>n>>k;
        ktao();
        ok=1;
        while(ok){
             if(check()){
                for(int i=1;i<=n;i++){
                    cout<<a[i];
                }
                cout<<endl;
             }
          sinh();
        }
    }
}