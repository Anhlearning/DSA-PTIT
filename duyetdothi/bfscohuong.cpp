#include<bits/stdc++.h>
using namespace std;

int n,m,u;
vector<int>ke[1001];
bool visited[1001];
void BFS(int u){
    queue<int>q;
    q.push(u);
    visited[u]=true;
    while(!q.empty()){
        int s=q.front();
        q.pop();
        cout<<s<<" ";
        for(int x: ke[s]){
            if(!visited[x]){
                q.push(x);
                visited[x]=true;
            }
        }
    }
}

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        cin>>n>>m>>u;
        memset(visited,false,sizeof(visited));
        for(int i=1;i<=n;i++){
            ke[i].clear();
        }
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            ke[x].push_back(y);
        }
        BFS(u);
        cout<<endl;
    }
}
