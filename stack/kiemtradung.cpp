#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        string s;
        cin>>s;
        stack<char>st;
        int ok=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{'){
                st.push(s[i]);
            }
            else {
                if(s[i]==')'&&!st.empty()&&st.top()=='('){
                    st.pop();
                }
                else if(s[i]==']'&&!st.empty()&&st.top()=='['){
                    st.pop();
                }
                else if(s[i]=='}'&&!st.empty()&&st.top()=='{'){
                    st.pop();
                }
                else {
                    ok=1;
                    break;
                }
            }
        }
        if(ok==1){
            cout<<"NO";
        }
        else {
            if(st.empty()){
            cout<<"YES";
        }
        else {
            cout<<"N0";
        }
        }
        cout<<endl;
    }
}