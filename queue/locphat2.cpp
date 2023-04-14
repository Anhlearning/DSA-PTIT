#include<bits/stdc++.h>
using namespace std;
using ll =unsigned long long;

vector<string>ve;
void init(){
    queue<string>qe;
    qe.push("6");
    qe.push("8");
    while(1){
        string tmp=qe.front();
        qe.pop();
        if(tmp.size()>=18) break;
        ve.push_back(tmp);
        qe.push(tmp+"6");
        qe.push(tmp+"8");
    }
}




int main(){
    init();
    int tc;
    cin>>tc;
    while(tc--){
            int n;
            cin>>n;
            vector<string>res;
            for(string x:ve){
                if(x.size()<=n){
                    res.push_back(x);
                }
            }
            cout<<res.size()<<endl;
            reverse(res.begin(),res.end());
            for(string x:res){
                cout<<x<<" ";
            }
            cout<<endl;
    }   
}