#include<bits/stdc++.h>

using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        long long a[n],b[n-1];
        set<long long >se;
        for(long long &x:a) {
            cin>>x;
        }
        for(long long &x:b) {
            cin>>x;
        }
        int i=0,j=0;
        while(i<n&&j<n-1){
            if(a[i]!=b[j]){
                cout<<i+1<<endl;
                break;
            }
            i++,j++;
        }
    }
}