#include<bits/stdc++.h>
using namespace std;
int a[1000],used[1000],n,k,ok=0,s,x[1000];

void Try(int i,int cnt,int sum){
    if(ok) return ;
    if(cnt==2){
        ok=1;
        return ;
    }
    for(int j=1;j<=n;j++){
        if(used[j]&&sum+a[j]<=s){
                x[i]=a[j];
                used[j]=0;
                if(sum+a[j]==s){
                    Try(i+1,cnt+1,0);
                }
                else {
                    Try(i+1,cnt,sum+a[j]);
                }
                used[j]=1;
        }
    }
}
int main(){
       int tc;
       cin>>tc;
       while(tc--){
            cin>>n;
            ok=0;
            memset(used,1,sizeof(used));
             s=0;
            for(int i=1;i<=n;i++){
                cin>>a[i];
                s+=a[i];
            }
            if(s%2!=0){
                cout<<"NO"<<endl;
            }
            else {
                s/=2;
                Try(1,0,0);
                if(ok){
                    cout<<"YES"<<endl;
                }
                else {
                    cout<<"NO"<<endl;
                }
            }
       }
}