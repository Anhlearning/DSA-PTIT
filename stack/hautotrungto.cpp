#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        string s;
        cin>>s;
        stack<string>st;
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])){
                st.push(string(1,s[i]));
            }
            else {
               string s1=st.top();
               st.pop();
               string s2=st.top();
               st.pop();
               string res='('+s2+s[i]+s1+')';
               st.push(res);
            }
        }
        cout<<st.top()<<endl;
    }

}