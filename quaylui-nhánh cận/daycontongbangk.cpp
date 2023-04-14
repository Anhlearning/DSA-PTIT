#include<bits/stdc++.h>
using namespace std;
int a[1000],x[1000],n,k,c=0;
vector<vector<int> >v;
void kq(){
    vector<int>v1;
    for(int i=1;i<=n;i++){
        if(a[i]==1){
            v1.push_back(x[i]);
        }
    }
    v.push_back(v1);
}
void Try(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n){
            int s=0;
            for(int l=1;l<=n;l++){
                if(a[l]){
                    s+=x[l];
                }
            }
            if(s==k){
                vector<int>tmp;
                for(int l=1;l<=n;l++){
                    if(a[l]){
                        tmp.push_back(x[l]);
                    }
                }
                v.push_back(tmp);
            }
        }
        else {
            Try(i+1);
        }
    }
}

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        cin>>n>>k;
        for(int i=1;i<=n;i++){
            cin>>x[i];
        }
        sort(x+1,x+n+1);
        v.clear();
        Try(1);
        if(v.size()==0) {
            cout<<-1;
        }
        else {
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            cout<<"[";
            for(int j=0;j<v[i].size();j++){
                cout<<v[i][j];
                if(j!=v[i].size()-1) cout<<" ";
            }
            cout<<"] ";
        }
        }
          cout<<endl;
    }
}