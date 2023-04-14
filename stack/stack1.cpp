#include<bits/stdc++.h>
using namespace std;
using ll =long long;
int main(){
    stack<ll>se;
    string s;
    while(cin>>s){
        ll n;
        if(s=="push"){
            cin>>n;
            cin.ignore();
            se.push(n);
        }
        else if(s=="pop"){
            if(!se.empty()){
                se.pop();
            }
            else {
                cout<<"empty"<<endl;
                break;
            }
        }
        else {
            if(se.empty()){
                cout<<"empty"<<endl;
                break;
            }
            vector<ll>v;
            while(!se.empty()){
                v.push_back(se.top());
                se.pop();
            }
            for(int i=v.size()-1;i>=0;i--){
                se.push(v[i]);
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }
}