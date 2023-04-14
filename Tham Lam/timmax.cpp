#include<bits/stdc++.h>

using namespace std;

int CONST=1e9+7;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        long long max_val=0;
        for(int i=0;i<n;i++){
            max_val+=(a[i]*i);
            max_val%=CONST;
        }
        cout<<max_val<<endl;
    }
}