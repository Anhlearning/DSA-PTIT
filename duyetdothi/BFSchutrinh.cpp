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
        bac[y]++;
    }
    memset(visited,false,sizeof(visited));
    for(int i=1;i<=n;i++){
        sort(ke[i].begin(),ke[i].end());
    }
}
void solve(){
    queue<int>q;
    for(int i=1;i<=n;i++){
        if(bac[i]==0){
            q.push(i);
        }
    }
    vector<int>tmp;
    while(!q.empty()){
        int x=q.front();
        q.pop();
        tmp.push_back(x);
        for(int u:ke[x]){
            bac[u]--;
            if(bac[u]==0){
                q.push(u);
            }
        }
    }
    if(tmp.size()!=n){
        cout<<1<<endl;
    }
    else cout<<0<<endl;
}
int main(){
    nhap();
    solve();

}