#include<bits/stdc++.h>
using namespace std;
int cnt,ok,a[1000],n;
void ktao(){
    cnt=1;
    a[cnt]=n;
}
void sinh(){
    int i=cnt;
    while(a[i]==1&&i>=1){
        --i;
    }
    if(i==0) ok=0;
    else {
        a[i]--;
        int sum=cnt-i+1;
        for(int j=i+1;j<=i+sum/a[i];j++){
            a[j]=a[i];
        }
        cnt=i+sum/a[i];
        if(sum%a[i]!=0){
            cnt++;
            a[cnt]=sum%a[i];
        }
    }
}
int main() {
   int tc;
   cin>>tc;
   while(tc--){
    cin>>n;
    ktao();
    vector<vector<int>>v;
    ok=1;
    while(ok){
        vector<int>tmp(a+1,a+cnt+1);
        v.push_back(tmp);
        sinh();
    }
    cout<<v.size()<<endl;
    for(auto it:v){
        cout<<"(";
        for(int i=0;i<it.size();i++){
            cout<<it[i];
            if(i!=it.size()-1){
                cout<<" ";
            }
        }
         cout<<") ";
    }
    cout<<endl;
   }
}
