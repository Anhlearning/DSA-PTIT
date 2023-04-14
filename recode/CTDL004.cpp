#include<bits/stdc++.h>
using namespace std;
int a[101],x[101],n,ok=1,k;
void ktao(){
    for(int i=1;i<=k;i++){
        a[i]=i;
    }
}
void sinh(){
    int i=k;
    while(a[i]==n-k+i&&i>=1){
        i--;
    }
    if(i==0){
        ok=0;
    }
    else {
        a[i]++;
        for(int j=i+1;j<=k;j++){
            a[j]=a[j-1]+1;
        }
    }
}
int  check(){
    for(int i=1;i<=k-1;i++){
        if(x[a[i+1]]<x[a[i]])  return 0;
    }
    return 1;
}


int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>x[i];
    }
    ktao();
    ok=1;
    while(ok){
        if(check()){
        for(int i=1;i<=k;i++){
            cout<<x[a[i]]<<" ";
        }
        cout<<endl;
        }
        sinh();
    }
}