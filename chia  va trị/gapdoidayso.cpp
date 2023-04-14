#include<bits/stdc++.h>

using namespace std;

using ll=long long ;
ll find(int  n,ll k){
    if(k%2==1) return 1;
    if(k==(ll)pow(2,n-1)) return n;
    if(k>(ll)pow(2,n-1)){
            return find(n-1,k-(ll)pow(2,n-1));
    }
     else  return find(n-1,k);
 }
int main(){
   int tc;
   cin>>tc;
   while(tc--){
        int n;
        ll k;
        cin>>n>>k;
        cout<<find(n,k)<<endl;
   }
}