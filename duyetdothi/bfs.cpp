#include<bits/stdc++.h>
using namespace std;

vector<int>adj[1001];
int visited[1001];
void BFS(int u){
    queue<int>q;
    q.push(u);
    visited[u]=true;
    while(!q.empty()){
        int x=q.front();
        q.pop();
        cout<<x<<" ";
        for(int y:adj[x]){
            if(!visited[y]){
                q.push(y);
                visited[y]=true;
            }
        }
    }
}

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,m,u;
        cin>>n>>m>>u;
        for(int i=1;i<=1001;i++){
            adj[i].clear();
        }
        memset(visited,false ,sizeof(visited));
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        BFS(u);
        cout<<endl;
    }
}