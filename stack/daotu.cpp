#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    cin.ignore();
    while(tc--){
        string s;
        getline(cin,s);
        stack<string>st;
        stringstream ss(s);
        string word;
        while(ss>>word){
            st.push(word);
        }
        while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
        }
        cout<<endl;
    }
}