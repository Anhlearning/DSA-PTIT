#include<bits/stdc++.h>

using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        string s;
        cin>>s;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='1'){
                s[i]='0';
            }
            else {
                s[i]='1';
                break;
            }
        }
        cout<<s<<endl;
    }
}
