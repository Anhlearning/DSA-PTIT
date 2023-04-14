#include<bits/stdc++.h>
using namespace std;
int a[100],x[100],n,s;
vector<string>v;
map<string,int>mp;
int ok=0;
void Try(int i,int bd,vector<int>tmp,int sum){
    if(sum>s)return ;
    if(sum==s){
        ok=1;
        string se="";
        for(int i=0;i<tmp.size();i++){
                se+=to_string(tmp[i])+" ";
        }
        se.pop_back();
        v.push_back(se);
        return ;
    }
    for(int j=bd;j<=n;j++){
        if(sum+a[j]<=s){
            tmp.push_back(a[j]);
            Try(i,j,tmp,sum+a[j]);
            tmp.pop_back();
        }
    }
}

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        cin>>n>>s;
        v.clear();
        for(int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+n+1);
        vector<int>tmp;
        Try(1,1,tmp,0);
        if(v.size()==0) cout<<-1;
        else {
        for(int i=0;i<v.size();i++){
                cout<<"["<<v[i]<<"] ";
        }
        }
        cout<<endl;
    }
}