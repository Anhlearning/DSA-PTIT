#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
      int n;
      cin>>n;
      int  a[n];
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      set<int>s;
      for(int i=0;i<n;i++){
        while(a[i]){
            s.insert(a[i]%10);
            a[i]/=10;
        }
      }
      for(auto it:s){
        cout<<it<<" ";
      }
      cout<<endl;
    }
}