#include<bits/stdc++.h>

using namespace std;



int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,s,m;
        cin>>n>>s>>m;
        if(s*m>(s-s/7)*n) cout<<-1<<endl;
        else {
            int ok=0;
            for(int i=1;i<=s-s/7;i++){
                if(i*n>s*m){
                    ok=1;
                    cout<<i<<endl;
                    break;
                }
            }
            if(ok==0) cout<<-1<<endl;
        }
    }
}