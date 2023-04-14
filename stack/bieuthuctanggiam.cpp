#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        string s;
        cin>>s;
        stack<int>st;
        string result;
        for(int i=0;i<=s.size();i++){
           st.push(i+1);
           if(i==s.size()||s[i]=='I'){
                while(!st.empty()){
                    result+=to_string(st.top());
                    st.pop();
                }
           }
        }
        cout<<result<<endl;
    }
}