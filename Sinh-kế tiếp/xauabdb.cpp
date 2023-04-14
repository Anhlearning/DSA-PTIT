#include<bits/stdc++.h>

using namespace std;
int a[10000],ok=1,n,k;
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
int check(){
    int d1=0;
    for(int i=1;i<=n;i++){
        if(!a[i]){
            d1++;
        }
        else {
            if(d1==k){
                return 1;
            }
            d1=0;
        }
    }
    return d1==k;
}
int main(){
    cin>>n>>k;
    int dem=0;
    vector<string>v;
    ok=1;
    ktao();
    while(ok){
        if(check()){
            dem++;
            string s="";
            for(int i=1;i<=n;i++){
                if(a[i]){
                    s+='B';
                }
                else {
                    s+='A';
                }
            }
            v.push_back(s);
        }
        sinh();
    }
    cout<<dem<<endl;
    for(string x:v){
        cout<<x<<endl;
    }
}