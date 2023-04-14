#include<bits/stdc++.h>

using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
    cin>>n;
    int a[n];
    map<int,int>mp;
    int ok=0;
    for(int &x:a) {
        cin>>x;
        mp[x]++;
    }    
    for(int i=0;i<n;i++){
        if(mp[a[i]]==2){
            ok=1;
            cout<<a[i]<<endl;
            break;
        }
    }
    if(ok==0) cout<<"NO"<<endl;
    }
}