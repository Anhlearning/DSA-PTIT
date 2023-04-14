#include<bits/stdc++.h>
using namespace std;

int gray[101],a[101],n,ok=1;
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
    cin>>n;
    ok=1;
    ktao();
    while(ok){
        for(int i=1;i<=n;i++){
            gray[i]=a[i-1] xor a[i];
        }
        for(int i=1;i<=n;i++){
            cout<<gray[i];
        }
        cout<<endl;
        sinh();
    }
}