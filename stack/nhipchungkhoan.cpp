#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int &x:a) cin>>x;
    int l[n];
    for(int i=0;i<n;i++) l[i]=1;
    stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty()&&a[i]>a[st.top()]){
            l[i]+=l[st.top()];
            st.pop();
        }
        st.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<l[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();

    }
}