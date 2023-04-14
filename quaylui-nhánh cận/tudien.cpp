#include<bits/stdc++.h>
using namespace std;
int k,m,n;
char c[100][100];
int a[100][100];
int x[8]={-1,-1,-1,0,0,1,1,1};
int y[8]={-1,0,1,-1,1,-1,0,1};
string se[100];
bool ok[100][100];
vector<string>v;
void Try(int i,int j,string s){
    for(int i=1;i<=k;i++){
        if(s==se[i]){
            cout<<s<<" ";
            v.push_back(s);
        }
    }
    for(int k=0;k<8;k++){
        int i1=i+x[k];
        int j1=j+y[k];
        if(!ok[i1][j1]&&i1<=m&&i1>=1&&j1>=1&&j1<=n){
            ok[i1][j1]=true;
            Try(i1,j1,s+c[i1][j1]);
            ok[i1][j1]=false;
        }
    }
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        cin>>k>>m>>n;
        for(int i=1;i<=k;i++){
            cin>>se[i];
        }
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                cin>>c[i][j];
            }
        }
          v.clear();
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                memset(ok,false,sizeof(ok));
                string tmp="";
                ok[i][j]=true;
                Try(i,j,tmp+c[i][j]);
            }
        }
         if(v.size()==0){
            cout<<-1<<endl;
         }
         else {
            for(string x:v){
                cout<<x<<" ";
            }
            cout<<endl;
         }
    }
}