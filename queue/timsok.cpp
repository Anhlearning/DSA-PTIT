#include<bits/stdc++.h>
using namespace std;

using ll=long long;
vector<int>tmp;
set<int>se;
int check(int x){
    set<int>se;
    while(x){
        int z=x%10;
        x/=10;
        if(se.count(z)) return 0;
        se.insert(z);
    }
    return 1;
}
void init(){
    queue<int>q;
    set<int>se;
    for(int i=0;i<=5;i++){
        q.push(i);
        se.insert(i);
    }
    while(!q.empty()){
        int top=q.front();
        q.pop();
        if(top>=1e7) break;
        tmp.push_back(top);
        for(int i=0;i<=5;i++){
            int tmp1=top*10+i;
            if(!se.count(tmp1)&&check(tmp1)){
                q.push(tmp1);
                se.insert(tmp1);
            }
        }
    }
}

int main(){
    int tc;
    cin>>tc;
    init();
    while(tc--){
        int l,r;
        cin>>l>>r;
        int cnt=0;
        for(int x:tmp){
            if(x>=l&&x<=r){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}