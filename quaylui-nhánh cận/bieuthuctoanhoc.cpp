#include<bits/stdc++.h>
using namespace std;
bool ok,p[10];
int a[16],vt[10];
vector<vector<int> > res;
vector<int>u;
void Trydau(){
    for(int j=1;j<=3;j++){
       u.push_back(j);
       if(u.size()==4){
            res.push_back(u);
       }
       else {
        Trydau();
       }
      u.pop_back();
    }
}
void check(){
    for(int i=0;i<res.size();i++){
        int s=a[vt[0]];
        cout<<a[vt[0]]<<" ";
        for(int j=0;j<4;j++){
            if(res[i][j]==1) {
                cout<<"+ ";
                cout<<a[vt[j+1]]<<" ";
                s+=a[vt[j+1]];}

            if(res[i][j]==2) {
                cout<<"- ";
                cout<<a[vt[j+1]]<<" ";
                s-=a[vt[j+1]];}

            if(res[i][j]==3){
                cout<<"* ";
                cout<<a[vt[j+1]]<<" ";
                s*=a[vt[j+1]];
            }
        }
        cout<<s<<endl;
        if(s==23) {
                cout<<"OK";
                ok=1;
                return ;
        }
    }

}
void Try(int i){
    // if(ok=1) return ;
    for(int j=0;j<5;j++){
        if(!p[j]){
            vt[i]=j;
            p[j]=1;
            if(i==4){
               check();
               if(ok=1) return;
            }
            else Try(i+1);
            p[j]=0;
        }
    }
}
void init(){
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    for(int i=0;i<10;i++){
        vt[i]=0;
        p[i]=0;
    }
    ok=0;
    u.clear();
}
int main(){
   int tc;
   cin>>tc;
   Trydau();
   while(tc--){
       init();
      Try(0);
       if(ok==1) cout<<"YES";
       else cout<<"NO";
       cout<<endl;
    
   }
}