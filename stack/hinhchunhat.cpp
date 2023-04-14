#include<bits/stdc++.h>
using namespace std;

using ll=long long ;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
       int n;
       cin>>n;
       int a[n+5];
       for(int i=0;i<n;i++) cin>>a[i];
       stack<int>st;
        long long  res=0;
        int i=1;
       while(i<n){
            if(st.empty()||(!st.empty()&&a[st.top()]<=a[i])){
                st.push(i);
                i++;
            }
            else {
                int idx=st.top();
                st.pop();
                if(st.empty()){
                    res=max(res,(1ll)*a[idx]*i);
                }
                else {
                    res=max(res,(1ll)*a[idx]*(i-st.top()-1));
                }
            }
       }
       while(!st.empty()){
            int idx=st.top();
            st.pop();
            if(st.empty()){
                res=max(res,(1ll)*a[idx]*i);
            }
            else {
                res=max(res,(1ll)*a[idx]*(i-st.top()-1));
            }
       }
       cout<<res<<endl;
    }

}