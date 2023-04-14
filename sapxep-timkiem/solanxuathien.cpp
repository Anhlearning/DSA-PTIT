#include<bits/stdc++.h>
using namespace std;
int k;

int main(){
 int tc;
 cin>>tc;
 while(tc--){
    int n,x;
    cin>>n>>x;
    int a[n+5];
    map<int,int>mp;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]==x) mp[x]++;
    }
    if(mp[x]) cout<<mp[x]<<endl;
    else cout<<-1<<endl;
 }
}