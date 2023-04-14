#include<bits/stdc++.h>
using namespace std;
int x[1000],used[1000],n,k;
void in(){
    for(int i=1;i<=k;i++){
        cout<<char(x[i]+64);
    }
    cout<<endl;
}
void Try(int i,int bd){
    for(int j=bd;j<=n;j++){
        x[i]=j;
        if(i==k){
            in();
        }
        else {
            Try(i+1,j);
        }
    }
}
int main(){
        char c;
        cin>>c>>k;
        n=int(c-64);
        Try(1,1);
}