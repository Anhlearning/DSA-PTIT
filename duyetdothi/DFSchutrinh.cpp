#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<int>ke[1001];
int visited[1001];
int bac[1001];
void nhap(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        ke[x].push_back(y);
    }
    memset(visited,false,sizeof(visited));
    for(int i=1;i<=n;i++){
        bac[i]=0;
        sort(ke[i].begin(),ke[i].end());
    }
}
int DFS(int u){
    bac[u]=1;
    visited[u]=1;
    for(int x:ke[u]){
        if(bac[x]==0){
            if(DFS(x)){
                return 1;
            }
        }
        else if(bac[x]==1){
            return 1;
        }
    }
    bac[u]=2;
    return 0;
}
int main(){
    nhap();
    for(int i=1;i<=n;i++){
       if(DFS(i)){
            cout<<1;
            return 0;
       }
    }
    cout<<0;
}