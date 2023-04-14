#include<bits/stdc++.h>
using namespace std;


int main(){
 int tc;
 cin>>tc;
 while(tc--){
    int n;
    cin>>n;
    vector<vector<int> >v;
    int a[n];
    for(int &x:a)cin>>x;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]){
                swap(a[j],a[i]);
            }
        }
        vector<int>tmp;
        for(int j=0;j<n;j++){
            tmp.push_back(a[j]);
        }
        v.push_back(tmp);
    }
    for(int i=v.size()-1;i>=0;i--){
        cout<<"Buoc "<<i+1<<": ";
        for(int x:v[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
 }
}