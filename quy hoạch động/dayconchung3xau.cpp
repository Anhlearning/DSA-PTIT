#include<bits/stdc++.h>
using namespace std;



int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int x,y,z;
        cin>>x>>y>>z;
        string a,b,c;
        cin>>a>>b>>c;
        int n=a.size();
        int m=b.size();
        int k=c.size();
        int f[n+1][m+1][k+1]={0};
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                for(int u=0;u<=k;u++){
                if(j==0||i==0||u==0){
                    f[i][j][u]=0;
                }
                else {
                    if(a[i-1]==b[j-1]&&b[j-1]==c[u-1]){
                        f[i][j][u]=f[i-1][j-1][u-1]+1;
                    }
                    else {
                        f[i][j][u]=max({f[i-1][j][u],f[i-1][j-1][u],f[i][j-1][u-1],f[i][j-1][u],f[i][j][u-1],f[i-1][j][u-1]});
                    }
                }
                }
            }
        }
        cout<<f[n][m][k]<<endl;
    }
}