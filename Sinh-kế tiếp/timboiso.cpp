#include<bits/stdc++.h>

using namespace std;
int a[10000],ok=0,n,m;
long long res=1e18;
void Try(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==m){
            long long tmp=0;
            for(int i=1;i<=m;i++){
                tmp=tmp*10+a[i];
            }
            tmp*=9;
            if(tmp%n==0&&tmp>=n){
                res=min(res,tmp);
                ok=1;
            }
        }
        else Try(i+1);
    }
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        cin>>n;
        m=1;
        ok=0;
        res=1e18;
        while(m<=17&&!ok){
            Try(1);
            m+=1;
        }
        cout<<res<<endl;
    }
}