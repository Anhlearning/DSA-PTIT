#include<bits/stdc++.h>
using namespace std;
int a[100],n,k,x[100];
void kq(){
    for(int i=1;i<=k;i++){
        cout<<a[x[i]]<<" ";
    }
    cout<<endl;
}
void Try(int i){
    for(int j=x[i-1]+1;j<=n-k+i;j++){
        x[i]=j;
        if(i==k) kq();
        else Try(i+1);
    }
}

int main(){
    int tc;
    cin>>tc;
    while(tc--){
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    Try(1);
    }
}