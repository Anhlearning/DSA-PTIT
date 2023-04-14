#include<bits/stdc++.h>
using namespace std;
int k;
bool cmp(int a , int b){
    return abs(a-k)<abs(b-k);
}
int main(){
 int tc;
 cin>>tc;
 while(tc--){
       int n;
    cin>>n>>k;
    int a[n+5];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    stable_sort(a+1,a+n+1,cmp);
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
 }
}