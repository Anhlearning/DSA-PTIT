#include<bits/stdc++.h>

using namespace std;

int check(int a[],int n){
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]) return 0;
    }
    return 1;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
    cin>>n;
    int a[n];
    for(int &x:a) cin>>x;
    vector<vector<int> >v;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
       vector<int>tmp;
        for(int k=0;k<n;k++){
            tmp.push_back(a[k]);
        }
        v.push_back(tmp);
        if(check(a,n)) break;
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