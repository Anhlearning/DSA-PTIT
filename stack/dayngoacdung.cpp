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
        int dem=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else {
                if(!st.empty()){
                    st.pop();
                    dem+=2;
                }
            }
        }
        cout<<dem<<endl;
    }
}