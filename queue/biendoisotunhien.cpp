#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        queue<pair<int,int>>q;
        set<int>se;
        se.insert(n);
        q.push({n,0});
        while(1){
            pair<int,int>top=q.front();
            q.pop();
            if(top.first==1){
                cout<<top.second<<endl;
                break;
            }
            for(int i=2;i<=sqrt(top.first);i++){
                if(top.first%i==0){
                    int x=max(i,top.first/i);
                    if(!se.count(x)){
                        q.push({x,top.second+1});
                        se.insert(x);
                    }
                }
            }
            if(top.first>1&&!se.count(top.first-1)){
                    q.push({top.first-1,top.second+1});
                    se.insert(top.first-1);
            }
        }
    }

}