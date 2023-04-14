#include<bits/stdc++.h>
using namespace std;
using ll=long long; 



int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        float a[n],b[n];
        for(int i=0;i<n;i++) cin>>a[i]>>b[i];
        int d[10001];
        for(int i=0;i<n;i++) d[i]=1;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(a[i]>a[j]&&b[i]<b[j]){
                    d[i]=max(d[i],d[j]+1);
                }
            }
        }
        cout<<*max_element(d,d+n)<<endl;
    }
}