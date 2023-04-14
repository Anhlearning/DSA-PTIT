#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    cin.ignore();
    stack<string>st;
    while(q--){
        string s;
        getline(cin,s);
        string res=s.substr(0,4);
        if(res=="PUSH"){
            string x=s.substr(5);
            st.push(x);
        }
        else if(s=="POP"){
            if(!st.empty()){
                st.pop();
            }
        }
        else {
            if(!st.empty()){
                cout<<st.top()<<endl;
            }
            else {
                cout<<"NONE"<<endl;
            }
        }
    }
}
