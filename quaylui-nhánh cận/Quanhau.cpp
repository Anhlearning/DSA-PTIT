#include<bits/stdc++.h>
using namespace std;
int a[100],cot[100],xuoi[100],nguoc[100],n;
int dem=0;
void Try(int i){
    for(int j=1;j<=n;j++){
        if(!cot[j]&&!xuoi[i-j+n]&&!nguoc[i+j-1]){
            a[i]=j;
            cot[j]=1;
            xuoi[i-j+n]=1;
            nguoc[i+j-1]=1;
            if(i==n){
                dem++;
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
      cin>>n;
      dem=0;
      Try(1);
      cout<<dem<<endl;
    }
}