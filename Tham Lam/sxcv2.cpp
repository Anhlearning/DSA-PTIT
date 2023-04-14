#include<bits/stdc++.h>

using namespace std;

struct job{
    int  stt,fe,fit;
};
bool cmp(job a , job b){
    return a.fit>b.fit;
}

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        job a[n];
        for(int i=0;i<n;i++){
            cin>>a[i].stt>>a[i].fe>>a[i].fit;
        }
        sort(a,a+n,cmp);
        int ans=0;
        int dem=0;
        int f[10001]={0};
        for(int i=0;i<n;i++){
            while(f[a[i].fe]&&a[i].fe>0) a[i].fe-=1;
            if(!f[a[i].fe]&&a[i].fe>0){
                dem++;
                ans+=a[i].fit;
                f[a[i].fe]=1;
            }
        }
        cout<<dem<<" "<<ans<<endl;
    }
}