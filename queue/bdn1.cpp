#include<bits/stdc++.h>
using namespace std;
using ll =unsigned long long;
vector<ll>ve;

void init(){
    queue<ll>qe;
    qe.push(1);
    while(1){
        ll x=qe.front();
        qe.pop();
        if(x>=9e18){
            return ;
        }
        ve.push_back(x);
        qe.push(x*10);
        qe.push(x*10+1);
    }
}




int main(){
    init();
    vector<ll>ans(1005);
    for(int i=1;i<=1000;i++){
        for(ll x:ve){
            if(x%i==0){
                ans[i]=x;
                break;
            }
        }
    }
    int tc;
    cin>>tc;
    while(tc--){
            ll n;
            cin>>n;
            cout<<ans[n]<<endl;
    }
}