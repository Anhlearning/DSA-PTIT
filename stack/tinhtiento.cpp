#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        string s;
        cin>>s;
        stack<int>st;
        for(int i=s.size()-1;i>=0;i--){
            if(isdigit(s[i])){
                st.push(s[i]-'0');
            }
            else {
                long long  x1=st.top();
                st.pop();
                long long  x2=st.top();
                st.pop();
                if(s[i]=='+'){
                    long long  res=x1+x2;
                    st.push(res);
                }
                if(s[i]=='-'){
                    long long  res=x1-x2;
                    st.push(res);
                }
                if(s[i]=='*'){
                    long long  res=x1*x2;
                    st.push(res);
                }
                if(s[i]=='/'){
                    long long  res=x1/x2;
                    st.push(res);
                }
            }
        }
        cout<<st.top()<<endl;
    }
}