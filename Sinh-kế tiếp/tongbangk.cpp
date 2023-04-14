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
int main(){
    cin>>n>>k;
    ktao();
    ok=1;
    int x[n+5];
    for(int i=1;i<=n;i++){
        cin>>x[i];
    }
    int dem=0;
    while(ok){
        int sum=0;
        for(int i=1;i<=n;i++){
            if(a[i]==1){
                sum+=x[i];
            }
        }
        if(sum==k){
            dem++;
            for(int i=1;i<=n;i++){
                if(a[i]==1){
                    cout<<x[i]<<" ";
                }
            }
            cout<<endl;
        }
        sinh();
    }
    cout<<dem<<endl;
}
