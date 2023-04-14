#include<bits/stdc++.h>
using namespace std;

int uutien(char c){
    if(c=='^') return 4;
    if(c=='+'||c=='-') return 2;
    if(c=='/'||c=='*') return 3;
    else return 1;
}



int main(){
    int tc;
    cin>>tc;
    while(tc--){
       string s;
       cin>>s;
       string res="";
       stack<char>st;
       for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else if(isalpha(s[i])){
                res+=s[i];
            }
            else if(s[i]==')'){
                while(!st.empty()&&st.top()!='('){
                    res+=st.top();
                    st.pop();
                }
                st.pop();
            }
            else {
                while(!st.empty()&&uutien(st.top())>=uutien((s[i]))){
                        res+=st.top();
                        st.pop();
                }
                st.push(s[i]);
            }
       }
       while(!st.empty()){
            if(st.top()!='('){
                res+=st.top();
                st.pop();
            }
            else st.pop();
       }
       cout<<res<<endl;
    }
}