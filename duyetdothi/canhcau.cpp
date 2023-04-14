#include<bits/stdc++.h>
using namespace std;
vector<int>ke[1001];
int visited[1001];
int n,m;
vector<pair<int,int> >edg;
void DFS(int u,int s,int t){
    visited[u]=true;
    for(int x:ke[u]){
        if(x==s&&u==t||x==t&&u==s){
            continue;
        }
        else {
            if(!visited[x]){
                DFS(x,s,t);
            }
        }
    }
}
int  tplt(int s, int t){
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            cnt++;
            DFS(i,s,t);
        }
    }
    return cnt;
}
void canhcau(){
    int cc=tplt(0,0);
    for(auto x:edg){
        int s=x.first;
        int t=x.second;
        memset(visited,false,sizeof(visited));
        if(cc<tplt(s,t)){
            cout<<s<<" "<<t<<" ";
        }
    }
}

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        cin>>n>>m;
        memset(visited,false ,sizeof(visited));
        for(int i=0;i<1001;i++){
            ke[i].clear();
        }
        edg.clear();
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            edg.push_back({x,y});
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        canhcau();
        cout<<endl;
    }
}