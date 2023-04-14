#include<bits/stdc++.h>
using namespace std;
using ll =long long;
vector<long long>ve;

void init(){
    queue<ll>qe;
    qe.push(9);
    while(1){
        long long  x=qe.front();
        qe.pop();
        if(x>=1e18){
            break;
        }
        ve.push_back(x);
        qe.push(x*10);
        qe.push(x*10+9);
    }
}




int main(){
    init();
    vector<long long>ans(105);
    for(int i=1;i<=100;i++){
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
            int n;
            cin>>n;
            cout<<ans[n]<<endl;
    }
}