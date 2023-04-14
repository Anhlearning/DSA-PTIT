#include<bits/stdc++.h>
using namespace std;
using ll =long long;

void solve(){
    string s1,s2;
    cin>>s1>>s2;
    stack<char>st1;
    stack<char>st2;
    for(int i=0;i<s1.size();i++){
        if(s1[i]!=')'){
            st1.push(s1[i]);
        }
        else {
            string tmp="";
            while(st1.top()!='('){
                tmp=st1.top()+tmp;
                st1.pop();
            }
            st1.pop();
            if(!st1.empty()&&st1.top()=='-'){
                for(char j : tmp){
                    if(j=='-') j='+';
                    else if(j=='+') j='-';
                    st1.push(j);
                }
            }
            else {
                for(char j:tmp){
                    st1.push(j);
                }
            }
        }
    }
    string ans="";
    while(!st1.empty()){
        ans=st1.top()+ans;
        st1.pop();
    }
    for(int i=0;i<s2.size();i++){
        if(s2[i]!=')'){
            st2.push(s2[i]);
        }
        else {
            string tmp="";
            while(st2.top()!='('){
                tmp=st2.top()+tmp;
                st2.pop();
            }
            st2.pop();
            if(!st2.empty()&&st2.top()=='-'){
                for(char j : tmp){
                    if(j=='-') j='+';
                    else if(j=='+') j='-';
                    st2.push(j);
                }
            }
            else {
                for(char j:tmp){
                    st2.push(j);
                }
            }
        }
    }
     string res="";
    while(!st2.empty()){
        res=st2.top()+res;
        st2.pop();
    }
    for(int i=0;i<ans.size();i++){
        if(ans[i]!=res[i]){
            cout<<"NO"<<endl;
            return ;
        }
    }
    cout<<"YES"<<endl;
}

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}