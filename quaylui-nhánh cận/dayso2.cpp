#include<bits/stdc++.h>
using namespace std;
vector<vector<int> >v;
void Try(int a[ ],int n){
    if(n>0){ 
        vector<int>tmp;
    for(int i=0;i<n;i++){
        tmp.push_back(a[i]);
    }
    v.push_back(tmp);
    for(int i=0;i<n-1;i++){
        a[i]=a[i]+a[i+1];
    }
    Try(a,n-1);
    }
}


int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        v.clear();
        Try(a,n);
        for(int i=v.size()-1;i>=0;i--){
                cout<<"[";
                for(int j=0;j<v[i].size();j++){
                    cout<<v[i][j];
                    if(j!=v[i].size()-1) cout<<" ";
                }
                cout<<"]"<<" ";
        }
        cout<<endl;
    }
}