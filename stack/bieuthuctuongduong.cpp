#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    stack<char>st;
    for(int i=0;i<s.size();i++){
        if(s[i]!=')'){
            st.push(s[i]);
        }
        else {
            string tmp="";
            while(st.top()!='('){
                tmp=st.top()+tmp;
                st.pop();
            }
            st.pop();
            if(!st.empty()&&st.top()=='-'){
                for(char j :tmp){
                    if(j=='-') j='+';
                    else if(j=='+')j='-';
                    st.push(j);
                }
            }
            else {
                for(char j:tmp){
                    st.push(j);
                }
            }
        }
    }
    string ans="";
    while(!st.empty()){
        ans=st.top()+ans;
        st.pop();
        }
    cout<<ans<<endl;
}


int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}