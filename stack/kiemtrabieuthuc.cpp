#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    cin.ignore();
    while(tc--){
        string s;
        getline(cin,s);
        stack<char>st;
        int ok=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else if(s[i]=='+'||s[i]=='-'||s[i]=='/'||s[i]=='*'){
                st.push(s[i]);
            }
            else if(s[i]==')') {
                if(st.top()=='('){
                    ok=1;
                }
                while(st.top()=='+'||st.top()=='-'||st.top()=='*'||st.top()=='/'){
                    st.pop();
                }
                st.pop();
            }
        }
         if(ok==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}