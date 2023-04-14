#include<bits/stdc++.h>

using namespace std;
int a[10000],ok=1,n;
void ktao(){
    for(int i=1;i<=n;i++){
        a[i]=0;
    }
}
void sinh(){
    int i=n;
    while(a[i]==1&&i>=1){
        a[i]=0;
        --i;
    }
    if(i==0) ok=0;
    else  {
        a[i]=1;
    }
}

int main(){
    int m;
    cin>>m;
    n=m/2;
    vector<string>v;
    while(ok){
        string s="";
        for(int i=1;i<=n;i++){
            s+=to_string(a[i]);
        }
        string res=s;
        reverse(s.begin(),s.end());
        v.push_back(res+s);
        sinh();
    }
    for(int i=0;i<v.size();i++){
        for(char x:v[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}