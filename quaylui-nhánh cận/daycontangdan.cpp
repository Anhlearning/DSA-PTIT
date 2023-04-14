#include<bits/stdc++.h>
using namespace std;
int a[1000],x[1000],n,k,c=0;
vector<string>v;
void Try(int i,int bd){
    for(int j=bd;j<=n;j++){
        if(a[j]>x[i-1]){
            x[i]=a[j];
            if(i>=2){
                string s="";
                for(int u=1;u<=i;u++){
                    s+=to_string(x[u])+" ";
                }
                v.push_back(s);
            }
            Try(i+1,j+1);
        }
    }
}

int main(){
   cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    Try(1,1);
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
            cout<<v[i]<<endl;
    }
}