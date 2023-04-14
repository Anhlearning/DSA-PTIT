#include<bits/stdc++.h>
using namespace std;
int a[100],cot[100],xuoi[100],nguoc[100],n,x[100][100];
int max_val=-1e9;
void in(){
    int tmp=0;
    for(int i=1;i<=8;i++){
        tmp+=x[i][a[i]];
    }
    max_val=max(max_val,tmp);
}
void Try(int i){
    for(int j=1;j<=n;j++){
        if(!cot[j]&&!xuoi[i-j+n]&&!nguoc[i+j-1]){
            a[i]=j;
            cot[j]=1;
            xuoi[i-j+n]=1;
            nguoc[i+j-1]=1;
            if(i==n){
                in();
            }
            else {
                Try(i+1);
            }
            cot[j]=0;
            xuoi[i-j+n]=0;
            nguoc[i+j-1]=0;
        }
    }
}

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        memset(cot,0,sizeof(cot));
        memset(xuoi,0,sizeof(xuoi));
        memset(nguoc,0,sizeof(nguoc));
        for(int i=1;i<=8;i++){
            for(int j=1;j<=8;j++){
                cin>>x[i][j];
            }
        }
         n=8;
        max_val=-1e9;
        Try(1);
        cout<<max_val<<endl;
    }
}