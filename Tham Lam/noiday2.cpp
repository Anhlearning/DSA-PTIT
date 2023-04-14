#include<bits/stdc++.h>
using namespace std;

using ll=long long ;
int cnt=1e9+7;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        priority_queue<ll,vector<ll>,greater<ll> >q;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            q.push(x);
        }
        ll ans=0;
        while(q.size()>1){
            ll x=q.top();
            q.pop();
            ll y=q.top();
            q.pop();
            ll tmp=(x+y)%cnt;
            q.push(tmp);
            ans+=tmp;
            ans%=cnt;
        }
        cout<<ans<<endl;
    }
}