#include<bits/stdc++.h>

using namespace std;

using ll=long long ;



int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int a[n];
        for(int &x:a) cin>>x;
        int res=n;
        sort(a,a+n);
        int i=n-1,j=n/2-1;
        while(i>=n/2&&j>=0){
            if(a[i]>=a[j]*2){
                res--;
                i--;
                j--;
            }
            else {
                j--;
            }
        }
        cout<<res<<endl;
    }
}