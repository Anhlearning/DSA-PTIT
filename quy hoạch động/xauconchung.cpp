#include<bits/stdc++.h>
using namespace std;



int main(){
    int tc;
    cin>>tc;
    while(tc--){
        string a,b;
        cin>>a>>b;
        int n=a.size();
        int m=b.size();
        int f[n+1][m+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(j==0||i==0){
                    f[i][j]=0;
                }
                else {
                    if(a[i-1]==b[j-1]){
                        f[i][j]=f[i-1][j-1]+1;
                    }
                    else {
                        f[i][j]=max(f[i-1][j],f[i][j-1]);
                    }
                }
            }
        }
        cout<<f[n][m]<<endl;
    }
}