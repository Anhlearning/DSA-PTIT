#include<bits/stdc++.h>
using namespace std;
int n,c[100][100],used[100],cmin=1e9,s,x[100];
int res=1e9;
void init(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>c[i][j];
            if(cmin>c[i][j]) cmin=c[i][j];
        }
    }
}
void Try(int i){
    if(s+cmin*(n-i+1)>=res) return ;
    for(int j=1;j<=n;j++){
        if(used[j]){
            x[i]=j;
            used[j]=0;
            s+=c[x[i-1]][j];
            if(i==n){
                if(s+c[x[n]][x[1]]<res){
                    res=s+c[x[n]][x[1]];
                }
            }
            else {
                Try(i+1);
            }
            s-=c[x[i-1]][j];
            used[j]=1;
        }
    }
}
int main(){
    memset(used,1,sizeof(used));
    used[1]=0;
    x[1]=1;
    init();
    Try(2);
    cout<<res;
}