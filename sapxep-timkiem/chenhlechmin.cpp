#include<bits/stdc++.h>
using namespace std;
int k;

int main(){
 int tc;
 cin>>tc;
 while(tc--){
    int n;
    cin>>n;
    int a[n];
    for(int &x:a) cin>>x;
    sort(a,a+n);
    int min_val=1e9;
    for(int i=0;i<n-1;i++){
        min_val=min(min_val,a[i+1]-a[i]);
    }
    cout<<min_val<<endl;
 }
}