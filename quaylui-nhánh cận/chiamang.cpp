#include<bits/stdc++.h>
using namespace std;
int a[1000],used[1000],n,k,s,c=0;
int min_val=1e9;

void Try(int sum,int dem){
    if(c==1) return ;
    if(dem==k){
        c=1;
        return ;
    }
    for(int i=1;i<=n;i++){
        if(used[i]=true){
            used[i]=false;
            if(sum==s){
                cout<<endl;
                Try(0,dem+1);
            }
            if(sum>s) return ;
            else{
                Try(sum+a[i],dem);
            }
            used[i]=true;
        }
    }
}
int main(){
   int tc;
   cin>>tc;
   while(tc--){
        cin>>n>>k;
        s=0;
        memset(used,1,sizeof(used));
        for(int i=1;i<=n;i++){
            cin>>a[i];
            s+=a[i];
        }
        if(s%k!=0){
            cout<<0;
        }
        else {
            s/=k;
            Try(0,0);
            cout<<c;
        }
        cout<<endl;
   }
}