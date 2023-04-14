#include<bits/stdc++.h>

using namespace std;
bool ok[300];
vector<int>a;
vector<vector<int> >res;
int n,p,s,vt;

void sang(){
   for(int i=2;i<=200;i++){
        if(!ok[i]){
            a.push_back(i);
            for(int j=i*i;j<=200;j+=i){
                ok[j]=true;
            }
        }
   }
}
void init(){
    cin>>n>>p>>s;
    vt=upper_bound(a.begin(),a.end(),p)-a.begin();
    for(int i=0;i<300;i++){
        ok[i]=false;
    }
    res.clear();
}
void Try(int i,vector<int>v,int sum){
    if(sum>s) return ;
    if(sum==s&&v.size()==n){
        for(int x:v){
            cout<<x<<" ";
        }
        cout<<endl;
        res.push_back(v);
        return ;
    }
    for(int j=i;j<a.size();j++){
        cout<<a[j]<<endl;
        if(!ok[j]&&sum+a[j]<=s&&v.size()<n){
            v.push_back(a[j]);
            ok[j]=true;
            Try(j+1,v,sum+a[j]);
            v.pop_back();
            ok[j]=false;
        }
    }
}


int main(){
    int tc;
    cin>>tc;
    sang();
    while(tc--){
       init();
       vector<int>v;
       v.clear();
        Try(vt,v,0);
        cout<<res.size()<<endl;
        for(int i=0;i<res.size();i++){
            for(int x:res[i]){
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
}