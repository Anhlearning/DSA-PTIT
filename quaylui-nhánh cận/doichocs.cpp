#include<bits/stdc++.h>
using namespace std;



int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int k;
        string s;
        cin>>k>>s;
        for(int i=0;i<s.size();i++){
            char Max=s[s.size()-1];
            int vt=s.size()-1;
            for(int j=s.size()-1;j>i;--j){
                if(Max<s[j]){
                    Max=s[j];
                    vt=j;
                }
            }
            if(s[i]<Max&&k>0){
                swap(s[i],s[vt]);
                k--;
            }
            if(k==0) break;
        }
        cout<<s<<endl;
    }
}