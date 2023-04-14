#include<bits/stdc++.h>
using namespace std;
int a[1000],used[1000],n;
void kq(){
    for(int i=1;i<=n;i++){
        cout<<char(a[i]+64);
    }
    cout<<" ";
}
void Try(int i){
    for(int j=1;j<=n;j++){
        if(used[j]){
            a[i]=j;
            used[j]=0;
            if(i==n){
                kq();
            }
            else {
                Try(i+1);
            }
            used[j]=1;
        }
    }
}

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        string s;
        cin>>s;
        memset(used,1,sizeof(used));
        n=s.size();
        Try(1);
        cout<<endl;
    }
}