#include<bits/stdc++.h>
using namespace std;

using ll=long long ;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        string x,y;
        cin>>x>>y;
        ll a=0,b=0,p=1;
        for(int i=x.size()-1;i>=0;i--){
            a+=int(x[i]-'0')*p;
            p*=2;
        }
        p=1;
        for(int i=y.size()-1;i>=0;i--){
            b+=int(y[i]-'0')*p;
            p*=2;
        }
        cout<<a*b<<endl;
    }
}