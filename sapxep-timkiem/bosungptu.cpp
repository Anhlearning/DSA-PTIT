#include<bits/stdc++.h>
using namespace std;


int main(){
 int tc;
 cin>>tc;
 while(tc--){
    int n;
    cin>>n;
    int a[n];
    set<int>se;
    for(int &x:a) {
        cin>>x;
        se.insert(x);
    }
    int l=*min_element(a,a+n);
    int r=*max_element(a,a+n);
    int dem=0;
    for(auto it:se){
        while(l<it){
            l++;
            dem++;
        }
        l++;
    }
    cout<<dem<<endl;
 }
}
