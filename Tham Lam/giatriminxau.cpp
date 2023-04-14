#include<bits/stdc++.h>

using namespace std;

using ll=long long ;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int k;
        string s;
        cin>>k>>s;
        int d[300]={0};
        if(k>=s.size()) cout<<0;
        else {
            for(char x:s){
                d[x]++;
            }
            priority_queue<ll>q;
            for(int i=0;i<300;i++){
                if(d[i]){
                    q.push(d[i]);
                }
            }
            ll ans=0;
            while(k>0){
                ll x=q.top();
                q.pop();
                x--;
                q.push(x);
                k--;
            }
            while(!q.empty()){
                ans+=1ll*q.top()*q.top();
                q.pop();
            }
            cout<<ans<<endl;
        }
   }
}   