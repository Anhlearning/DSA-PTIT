#include<bits/stdc++.h>
using namespace std;

using ll=long long ;
int cnt=1e9+7;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        ll p,q;
        cin>>p>>q;
        while(p){
            if(q%p==0){
                cout<<"1/"<<q/p<<endl;
                break;
            }
            else {
                ll tmp=q/p;
                ll x=tmp+1;
                cout<<"1/"<<x<<" + ";
                p=p*x-q;
                q*=x;
            }
        }
        cout<<endl;
    }
}