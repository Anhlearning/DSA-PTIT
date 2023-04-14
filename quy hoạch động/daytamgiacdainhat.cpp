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
        int l[n]={0};
        l[0]=1;
        int r[n]={0};
        r[n-1]=1;
        for(int i=1;i<n;i++){
            if(a[i]>a[i-1]){
                l[i]=l[i-1]+1;
            }
            else l[i]=1;
        }
        for(int i=n-2;i>=0;i--){
            if(a[i]>a[i+1]){
                r[i]=r[i+1]+1;
            }
            else r[i]=1;
        }
        int res=0;
        for(int i=0;i<n;i++){
            res=max(res,r[i]+l[i]-1);    
        }
        cout<<res<<endl;
    }
}