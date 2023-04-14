#include<bits/stdc++.h>

using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,k;
    cin>>n>>k;
    int a[n+5];
    for(int i=1;i<=k;i++){
        cin>>a[i];
    }
    int idx=-1;
    int c=0;
    for(int i=k;i>=1;i--){
        if(a[i]!=n-k+i){
            c=1;
            idx=i;
            a[i]++;
            break;
        }
    }
    if(c==0){
        for(int i=1;i<=k;i++){
            cout<<i<<" ";
        }
    }
    else {
        for(int i=idx+1;i<=k;i++){
        a[i]=a[i-1]+1;
    }
    for(int i=1;i<=k;i++){
        cout<<a[i]<<" ";
    }
    }
    cout<<endl;
    }
}

