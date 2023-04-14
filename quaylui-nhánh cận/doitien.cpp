#include<bits/stdc++.h>
using namespace std;
int a[1000],x[1000],n,s,c=0;
int min_val=1e9;


void Try(int i,int bd,int sum){
    if(i>min_val) return ; 
   for(int j=bd;j<=n;j++){
        if(sum+a[j]<=s){
            x[i]=a[j];
            if(sum+a[j]==s){
                min_val=min(min_val,i);
            }
            else {
                Try(i+1,j+1,sum+a[j]);
            }
        }
   }
}
int main(){
        cin>>n>>s;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        min_val=1e9;
        Try(1,1,0);
        if(min_val==1e9) cout<<-1<<endl;
        else 
        cout<<min_val<<endl;
   
}