#include<bits/stdc++.h>
using namespace std;
using ll=long long; 



int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
    cin>>n;
    int a[n];
    for(int &x:a) cin>>x;
    vector<int>f(n,1);
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i]>=a[j]){
                f[i]=max(f[i],f[j]+1);
            }
        }
    }
    cout<<n-*max_element(f.begin(),f.end())<<endl;
    }
}