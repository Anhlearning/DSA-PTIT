#include<bits/stdc++.h>
using namespace std;


int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,c;
        cin>>n>>c;
        vector<int>v[1002];
        for(int i=1;i<=c;i++){
            int x,y;
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        for(int i=1;i<=n;i++){
            sort(v[i].begin(),v[i].end());
            cout<<i<<": ";
            for(int x:v[i]){
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
}