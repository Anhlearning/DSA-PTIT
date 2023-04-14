#include<bits/stdc++.h>
using namespace std;
int k;

int main(){
//  int tc;
//  cin>>tc;
//  while(tc--){
    int n;
    cin>>n;
    int a[n];
    vector<vector<int> >v;
    for(int &x:a)cin>>x;
    for(int i=0;i<n-1;i++){
        int min=a[i];
        int idx=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<min){
                min=a[j];
                idx=j;
            }
        }
        if(min<a[i]){
            swap(a[i],a[idx]);
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
//     cout<<endl;
//  }
}