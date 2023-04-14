#include<bits/stdc++.h>
using namespace std;
int n,a[1000][1000],c=0;
vector<string>v;
void nhap(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    v.clear();
    c=0;
}

void Try(int i,int j,string s){
    if(i==1&&j==1&&a[i][j]==0){
        c=0;
        return ;
    }
    if(i==n&&j==n){
        c=1;
       v.push_back(s);
       return ;
    }
    if(i+1<=n&&a[i+1][j]==1){
            a[i][j]=0;
            s+="D";
            Try(i+1,j,s);
            a[i][j]=1;
            s.pop_back();
        }
    if(j-1>=1&&a[i][j-1]==1){
        a[i][j]=0;
        s+="L";
        Try(i,j-1,s);
        a[i][j]=1;
        s.pop_back();
    }
     if(j+1<=n&&a[i][j+1]==1){
            a[i][j]=0;
            s+="R";
            Try(i,j+1,s);
            a[i][j]=1;
            s.pop_back();
        }
     if(i-1>=1&&a[i-1][j]==1){
        a[i][j]=0;
        s+="U";
        Try(i-1,j,s);
        a[i][j]=1;
        s.pop_back();
    }
}


int main(){
    int tc;
    cin>>tc;
    while(tc--){
        v.clear();
       cin>>n;
       nhap();
       string s="";
        Try(1,1,s);
        if(c==0){
            cout<<"-1";
        }
        else {
            sort(v.begin(),v.end());
            for(int i=0;i<v.size();i++){
                cout<<v[i]<<" ";
            }
        }
        cout<<endl;
    }
}