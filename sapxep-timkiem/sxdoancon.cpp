#include<bits/stdc++.h>
using namespace std;


int main(){
   int tc;
   cin>>tc;
   while(tc--){
    int n;
    cin>>n;
    long long a[n];
    long long lon[n];
    long long  be[n];
    for(int i=0;i<n;i++) cin>>a[i];
    be[0]=a[0];
    lon[n-1]=a[n-1];
    for(int i=1;i<n;i++){
        be[i]=max(be[i-1],a[i]);
    }
    for(int i=n-2;i>=0;i--){
      
        lon[i]=min(lon[i+1],a[i]);
    }
    int cnt=0;
    vector<int>v;
    for(int i=0;i<n-1;i++){
        if(be[i]<=lon[i+1]){
            cnt++;
            v.push_back(i+1);
        }
    }   
    sort(v.begin(),v.end());
    cout<<cnt<<endl;
    if(cnt){
        for(int x:v){
            cout<<x<<" ";
        }
    }
    cout<<endl;
   }
}
