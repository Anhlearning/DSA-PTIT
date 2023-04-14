#include<bits/stdc++.h>

using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int a[n];
        for(int &x:a) cin>>x;
        int max_val=-1e9;
        for(int i=0;i<n;i++){
            int sum=a[i];
            for(int j=i+1;j<n;j++){
                sum+=a[j];
                max_val=max(sum,max_val);
            }
        }
        cout<<max_val<<endl;
    }
}