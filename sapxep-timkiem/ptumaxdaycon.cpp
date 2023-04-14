#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<*max_element(a,a+k)<<" ";
        for(int i=k;i<n;i++){
            cout<<*max_element(a+i-k+1,a+i+1)<<" ";
        }
        cout<<endl;
    }
}