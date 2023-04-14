#include<bits/stdc++.h>

using namespace std;



int main(){
    int tc;
    cin>>tc;
    while(tc--){
       string s;
       cin>>s;
       int val=0,cnt=0;
       for(int i=0;i<s.size();i++){
            if(s[i]=='['){
                cnt++;
            }
            else {
                cnt--;
                if(cnt<0)val=val-cnt;
            }
       }
       cout<<val<<endl;
    }
}