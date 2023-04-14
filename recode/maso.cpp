#include<bits/stdc++.h>
using namespace std;
int n,ok1=1,a[100],b[100],ok2=1;
int c=1;
void ktao(){
    for(int i=1;i<=n;i++){
        a[i]=1;
    }
}
void ktao1(){
    for(int i=1;i<=n;i++){
        b[i]=i;
    }
}
void sinh(){
    int i=n;
    while(a[i]==n&&i>=1){
        a[i]=1;
        i--;
    }
    if(i==0) ok1=0;
    else {
        a[i]++;
    }
}
void sinh1(){
    int i=n-1;
    while(b[i]>b[i+1]&&i>=1){
        i--;
    }
    if(i==0){
        ok2=0;
    }
    else {
        int j=n;
        while(b[i]>b[j]){
            j--;
        }
        swap(b[i],b[j]);
        reverse(b+i+1,b+n+1);
    }
}

int main(){
    cin>>n;
    ktao1();
    ktao();
    ok1=1;
    ok2=1;
    while(ok2==1){
        for(int i=1;i<=n;i++){
            cout<<char(b[i]+64);
        }
        for(int i=1;i<=n;i++){
            cout<<a[i];
        }
        cout<<endl;
        sinh();
        if(ok1==0){
            ok1=1;
            sinh1();
        }
    }
    
}