#include<bits/stdc++.h>

using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int a[n+5];
        int idx=1;
        for(int i=n;i>=1;i--){
            a[idx]=i;
            idx++;
        }
        for(int i=1;i<=n;i++){
            cout<<a[i];
        }
        cout<<" ";
        while(prev_permutation(a+1,a+n+1)){
            for(int i=1;i<=n;i++){
                cout<<a[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
}
