#include<bits/stdc++.h>
using namespace std;


int main(){
    int tc;
    cin>>tc;
    while(tc--){
        string s;
        int k;
        cin>>k>>s;
        int res=0;
        int d[300];
        memset(d,0,sizeof(d));
        for(int i=0;i<s.size();i++){
            d[s[i]]++;
            res=max(res,d[s[i]]);
        }
        if((res-1)*(k-1)>s.size()-res){
            cout<<-1<<endl;
        }
        else cout<<1<<endl;
    }
}