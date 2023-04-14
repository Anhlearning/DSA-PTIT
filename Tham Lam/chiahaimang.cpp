#include<bits/stdc++.h>

using namespace std;



int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,k;
        cin>>n>>k;
        int dem=0;
        int a[n+5];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int j=0;
        long long sum1=0,sum2=0,res=0;
        while(j<n){
            if(j<k)sum1+=a[j];
            else sum2+=a[j];
            j++;
        }
        res=abs(sum2-sum1);
        sum2=0,sum1=0,j=0;
        while(j<n){
            if(j<n-k) sum1+=a[j];
            else sum2+=a[j];
            j++;
        }
        res=max(res,abs(sum2-sum1));
        cout<<res<<endl;
    }
}