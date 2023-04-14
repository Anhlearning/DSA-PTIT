#include<bits/stdc++.h>
using namespace std;
int a[100],used[100],n;
int check(){
    for(int i=2;i<=n;i++){
        if(abs(a[i]-a[i-1])==1){
            return 0;
        }
    }
    return 1;
}
void kq(){
    for(int i=1;i<=n;i++){
        cout<<a[i];
    }
    cout<<endl;
}
void Try(int i){
    for(int j=1;j<=n;j++){
        if(used[j]){
            a[i]=j;
            used[j]=0;
            if(i==n){
                if(check()){
                    kq();
                }
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
        memset(used,1,sizeof(used));
        cin>>n;
        Try(1);
    }
}