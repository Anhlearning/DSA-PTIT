#include<bits/stdc++.h>

using namespace std;



int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,m,k;
        cin>>n>>m>>k;
        int a[n],b[m],c[k];
        for(int &x:a) cin>>x;
        for(int &x:b) cin>>x;
        for(int &x:c) cin>>x;
        int l1=0,l2=0,l3=0;
        int ok=0;
        while(l1<n&&l2<m&&l3<k){
            if(a[l1]==b[l2]&&b[l2]==c[l3]){
                ok=1;
                cout<<a[l1]<<" ";
                l1++,l2++,l3++;
            }
            else  if(a[l1]<b[l2]){
                l1++;
            }
            else if(b[l2]<c[l3]){
                l2++;
            }
            else l3++;
        }

        if(ok==0)cout<<"NO";
        cout<<endl;
    }
}