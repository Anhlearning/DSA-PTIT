#include<bits/stdc++.h>

using namespace std;
int a[10000],ok=1,n,w;
void ktao(){
    for(int i=1;i<=n;i++){
        a[i]=0;
    }
}
void sinh(){
    int i=n;
    while(a[i]==1&&i>=1){
        a[i]=0;
        --i;
    }
    if(i==0) ok=0;
    else  {
        a[i]=1;
    }
}

int main(){
    cin>>n>>w;
    int x[n+5];
    int c[n+5];
    for(int i=1;i<=n;i++){
        cin>>x[i];
    }
    for(int i=1;i<=n;i++){
        cin>>c[i];
    }
    ktao();
    ok=1;
    long long res=0;
     vector<int>v;
    while(ok){
        long long tmp=0;
        long long cnt=0;
        for(int i=1;i<=n;i++){
            if(a[i]==1){
                tmp+=x[i];
                cnt+=c[i];
            }
        }
        if(cnt<=w){
           if(res<tmp){
                v.clear();
                for(int i=1;i<=n;i++){
                    v.push_back(a[i]);
                }
                 res=tmp;
           }
        }
        sinh();
    }
    cout<<res<<endl;
    for(auto it: v){
        cout<<it<<" ";
    }
}