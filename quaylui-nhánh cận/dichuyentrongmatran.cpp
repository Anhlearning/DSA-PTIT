#include<bits/stdc++.h>
using namespace std;
int n,m,a[1000][1000],c=0;
vector<string>v;
int dem=0;
void nhap(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    c=0;
}

void Try(int i,int j){
   if(i==n&&j==m){
        c=1;
        dem++;
   }
    if(i+1<=n){
        Try(i+1,j);
    }
    if(j+1<=m){
        Try(i,j+1);
    }
}


int main(){
    int tc;
    cin>>tc;
    while(tc--){
        dem=0;
        nhap();
        Try(1,1);
        cout<<dem<<endl;
    }
}