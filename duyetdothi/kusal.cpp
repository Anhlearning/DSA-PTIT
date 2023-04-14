#include<bits/stdc++.h>
using namespace std;
struct edge{
  int x,y,w;  
};

int n,m;
vector<edge>E;
int parent[1005],sz[1005];
void nhap(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y,w;  
        cin>>x>>y>>w;
        edge e{x,y,w};
        E.push_back(e);
    }
}
bool cmp(edge x,edge y){
    return x.w<y.w;
}
void init(){
     for(int i=1;i<=n;i++){
        parent[i]=i;
        sz[i]=1;
    }
}
int Find(int u){
    if(parent[u]==u)return u;
    return parent[u]=Find(parent[u]);
}
int Union(int u,int v){
    u=parent[u],v=parent[v];
    if(u==v) return false;
    if(sz[u]<sz[v]) swap(u,v);
    parent[v]=u;
    sz[u]+=sz[v];
    return true;
}
void kusal(){
    vector<edge>MST;
    int d=0;
    sort(E.begin(),E.end(),cmp);
    for(auto it:E){
        if(MST.size()==n-1) break;
        if(Union(it.x,it.y)){
            MST.push_back(it);
            d+=it.w;
        }
    }
    if(MST.size()<n-1) cout<<"IMPOSSIBLE";
    else {
        cout<<d<<endl;
    }
}
int main() {
    nhap();
    init();
    kusal();
}
