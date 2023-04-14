#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    queue<string>q;
    q.push(to_string(1));
    while(n--){
        string  x=q.front();
        q.pop();
        cout<<x<<" ";
        q.push(to_string(stoll(x)*10));
        q.push(to_string(stoll(x)*10+1));
    }   
}
int main(){
        int tc;
        cin>>tc;
        while(tc--){
          int n;
          cin>>n;
          solve(n);
          cout<<endl;
        }
}