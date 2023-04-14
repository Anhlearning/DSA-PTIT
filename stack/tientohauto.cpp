#include<bits/stdc++.h>
using namespace std;
using ll =long long;
int main(){
   int tc;
   cin>>tc;
   while(tc--){
    string s;
    cin>>s;
    stack<string>st;
    for(int i=s.size()-1;i>=0;i--){
        if(isalpha(s[i])){
            st.push(string(1,s[i]));
        }
        else {
            string tmp1=st.top();
            st.pop();
            string tmp2=st.top();
            st.pop();
            string res=tmp1+tmp2+s[i];
            st.push(res);
        }
    }
    cout<<st.top()<<endl;
   } 
   
}