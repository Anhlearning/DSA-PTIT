#include<bits/stdc++.h>

using namespace std;
int check(int n){
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int ok=1;
        for(int i=0;i<=n;i++){
            if(check(i)&&check(n-i)){
                ok=0;
                cout<<i<<" "<<n-i<<endl;
                break;
            }
        }
        if(ok==1) cout<<"-1"<<endl;
    }
}
