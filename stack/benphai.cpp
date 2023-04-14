#include<bits/stdc++.h>
using namespace std;

void next_greater(int a[],int n,int d[]){
    stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty()&&a[i]>a[st.top()]){
            d[st.top()]=i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        d[st.top()]=-1;
        st.pop();
    }
}
void smaller(int a[],int n,int d[]){
     stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty()&&a[i]<a[st.top()]){
            d[st.top()]=a[i];
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        d[st.top()]=-1;
        st.pop();
    }
}


int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int a[n];
        for(int &x:a) cin>>x;
        int next[n]={0};
        int small[n]={0};
        next_greater(a,n,next);
        smaller(a,n,small);
        for(int i=0;i<n;i++){
            if(next[i]!=-1){
                cout<<small[next[i]]<<" ";
            }
            else cout<<-1<<" ";
        }
       cout<<endl;
    }
}