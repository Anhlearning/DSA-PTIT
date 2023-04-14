#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<int>ke[1001];
int visited[1001];
int bac[1001];
int cnt=0;
void nhap(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        ke[x].push_back(y);
    }
    memset(visited,false,sizeof(visited));
}
int DFS(int u){
    cnt++;
    visited[u]=true;
    for(int x: ke[u]){
        if(!visited[x]){
            DFS(x);
        }
    }
    return cnt;
}
int main(){
    nhap();
    for(int i=1;i<=n;i++){
        memset(visited,false,sizeof(visited));
        cnt=0;
        int tmp=DFS(i);
        if(tmp!=n) {
            cout<<0;
            return 0;
            } 
    }
    cout<<1;
}