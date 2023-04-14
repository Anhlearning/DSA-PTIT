#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int>p1,pair<int,int>p2){
    return p1.second<p2.second;
}

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        priority_queue<long long,vector<long long>,greater<long long> >q;
        for(int i=1;i<=n;i++){
           long long x;
           cin>>x;
           q.push(x);
        }
        long long ans=0;
        while(q.size()>1){
            long long x=q.top();
            q.pop();
            long y=q.top();
            q.pop();
            ans+=x+y;
            q.push(x+y);
        }
        cout<<ans<<endl;
    }
}