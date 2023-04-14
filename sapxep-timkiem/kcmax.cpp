#include <bits/stdc++.h>
using namespace std;
 

int maxIndexDiff(int a[], int n)
{
    int l[n],r[n];
    l[0]=a[0];
    r[n-1]=a[n-1];
    for(int i=1;i<n;i++){
        l[i]=min(l[i-1],a[i]);
    }
    for(int i=n-2;i>=0;i--){
        r[i]=max(r[i+1],a[i]);
    }
    int mx=-1;
    int i=0,j=0;
    while(i<n&&j<n){
        if(l[i]<r[j]){
            mx=max(j-i,mx);
            j++;
        }
        else i++;
    }
    return mx;
        
}
 
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int val= maxIndexDiff(a,n);
        cout<<val<<endl;
    }
}
 
