#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,m;
        cin>>n>>m;
        pair<int,int>a[n];
        pair<int,int>b[m];
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a[i].first=x;
            a[i].second=i;
        }
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            b[i].first=x;
            b[i].second=i;
        }
        for(int i=0;i<n;i++){
            pair<int,int>p;
            for(int j=0;j<m;j++){
                p.first=a[i].first*b[j].first;
                p.second=i+j;
                v.push_back(p);
            }
        }
        int mu=0;
        while(mu<n+m-1){
            int hs=0;
            for(int i=0;i<v.size();i++){
                if(v[i].second==mu){
                    hs+=v[i].first;
                }
            }
            cout<<hs<<" ";
            mu++;
        }
        cout<<endl;
    }
}