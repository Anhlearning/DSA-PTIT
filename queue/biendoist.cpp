#include<bits/stdc++.h>
using namespace std;


int main(){
    int tc;
    cin>>tc;
    while(tc--){
        queue<pair<int,int>>q;
        set<int>se;
        int s,t;cin>>s>>t;
        se.insert(s);
        q.push({s,0});
        while(1){
            pair<int,int>top=q.front();
            q.pop();
            if(top.first==t){
                cout<<top.second<<endl;
                break;
            }
            if(top.first>1&&!se.count(top.first-1)){
                q.push({top.first-1,top.second+1});
                se.insert(top.first-1);
            }
            if(top.first<t&&!se.count(top.first*2)){
                q.push({top.first*2,top.second+1});
                se.insert(top.first*2);
            }
        }
    }
}