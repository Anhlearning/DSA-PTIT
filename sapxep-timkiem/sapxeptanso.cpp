#include<bits/stdc++.h>
using namespace std;
int k;
map<int,int>mp;
bool cmp(int a,int b){
    if(mp[a]!=mp[b]){
        return mp[a]>mp[b];
    }
    else {
        return a<b;
    }
}
int main(){
 int tc;
 cin>>tc;
 while(tc--){
    int n;
    cin>>n;
    int a[n];
    mp.clear();
    for(int &x:a) {
        cin>>x;
        mp[x]++;
    }
    sort(a,a+n,cmp);
    for(int x:a){
        cout<<x<<" ";
    }
    cout<<endl;
 }
}