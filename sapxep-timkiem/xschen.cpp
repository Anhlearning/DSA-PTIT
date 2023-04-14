#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n+5];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<vector<int> >v;
    for(int i=0;i<n;i++){
        int x=a[i];
        int pos=i-1;
        while(pos>=0&&x<a[pos]){
            a[pos+1]=a[pos];
            --pos;
        }
         a[pos+1]=x;
        vector<int>tmp;
        for(int j=0;j<=i;j++){
            tmp.push_back(a[j]);
        }
        v.push_back(tmp);
    }
    
    for(int i=v.size()-1;i>=0;i--){
        cout<<"Buoc "<<i<<": ";
        for(int x:v[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}