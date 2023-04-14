#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    cin.ignore();
    while(tc--){
       string s;
       cin>>s;
       stack<char>st;
       for(int i=0;i<s.size();i++){
            if(s[i]==')'&&!st.empty()){
                if(st.top()=='('){
                    st.pop();
                }
                else {
                    st.push(s[i]);
                }
            }
            else {
                st.push(s[i]);
            }
       }
       int dem=0;
       int n=st.size();
        while(!st.empty()&&st.top()=='('){
            st.pop();
            dem++;
        }
        cout<<n/2+dem%2<<endl;
    }
}