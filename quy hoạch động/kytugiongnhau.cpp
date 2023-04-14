#include<bits/stdc++.h>

using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int x1,x2,x3;
        cin>>x1>>x2>>x3;
        int f[n+3];
        f[0]=0;
        f[1]=x1;
        for(int i=2;i<=n;i++){
            if(i%2==1){
                f[i]=min(f[i-1]+x1,f[(i+1)/2]+x2+x3);
            }
            else {
                f[i]=min(f[i-1]+x1,f[i/2]+x3);
            }
        }
        cout<<f[n]<<endl;
    }
}