#include<bits/stdc++.h>
using namespace std;

int a[1005][1005];
int d[1005][1005];
int visited[1005][1005];
int n,m;
void nhap(){
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++) {
            cin>>a[i][j];
        }
    }
}
int bfs(int i,int j){
    queue<pair<int,int>>qe;
    qe.push({i,j});
    visited[i][j]=1;
    d[i][j]=0;
    while(!qe.empty()){
        pair<int,int>top=qe.front();
        qe.pop();
        int i1=top.first,j1=top.second;
        if(i1==m&&j1==n){
                return d[i1][j1];
        }
        if(i1+a[i1][j1]<=m&&!visited[i1+a[i1][j1]][j1]){
            qe.push({i1+a[i1][j1],j1});
            d[i1+a[i1][j1]][j1]=d[i1][j1]+1;
            visited[i1+a[i1][j1]][j1]=true;
        }
        if(j1+a[i1][j1]<=n&&!visited[i1][j1+a[i1][j1]]){
            qe.push({i1,j1+a[i1][j1]});
            d[i1][j1+a[i1][j1]]=d[i1][j1]+1;
            visited[i1][j1+a[i1][j1]]=true;
        }
    }
    return -1;
}

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        nhap();
        cout<<bfs(1,1)<<endl;
    }
}