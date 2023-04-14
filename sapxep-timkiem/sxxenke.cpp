#include<bits/stdc++.h>
using namespace std;
int main(){
 int tc;
 cin>>tc;
 while(tc--){
       int n;
    cin>>n;
    int a[n+5];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+n+1,greater<int>());
    int j=1;
    while(j<=n/2){
        if(a[j]!=a[n-j+1]){
            cout<<a[j]<<" "<<a[n-j+1]<<" ";
        }
        j++;
    }
    if(n%2==1)cout<<a[j]<<" ";
    cout<<endl;
 }
}