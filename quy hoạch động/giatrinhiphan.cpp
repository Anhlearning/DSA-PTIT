#include<bits/stdc++.h>
using namespace std;



int main(){
    int n,k;
    cin>>n>>k;
    int bi[n]={0};
    while(k--){
        int x,y;
        cin>>x>>y;
        for(int i=x-1;i<=y-1;i++){
            if(bi[i]){
                bi[i]=0;
            }
            else bi[i]=1;
        }
    }
    for(int i=0;i<n;i++){
        cout<<bi[i]<<" ";
    }
}