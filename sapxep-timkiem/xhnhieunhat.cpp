#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
    cin>>n;
    int a[n+5];
    map<int,int>mp;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    int max=0;
    int ok=1;
    int max_val;
    for(auto it:mp){
        if(it.second>max){
            max=it.second;
            max_val=it.first;
        }
    }
    if(max>n/2){
        cout<<max_val<<endl;
    }
    else cout<<"NO"<<endl;
    }
}