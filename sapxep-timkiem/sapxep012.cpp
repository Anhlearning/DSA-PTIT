#include<bits/stdc++.h>
using namespace std;
int k;

int main(){
 int tc;
 cin>>tc;
 while(tc--){
    int n;
    cin>>n;
    int a[10006];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
 }
}