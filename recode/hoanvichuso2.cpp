#include<bits/stdc++.h>
using namespace std;
int a[101],n,used[101];
vector<int>tmp;
string s;
void Try(int i){
    for(int j=0;j<n;j++){
        if(!used[j]){
            a[i]=j;
            used[j]=1;
            if(i==n){
                int cnt=0;
                for(int i=1;i<=n;i++){
                    cnt=cnt*10+(s[a[i]]-'0');
                }
                tmp.push_back(cnt);
            }
            else Try(i+1);
            used[j]=0;
        }
    }
}


int main(){
    int tc;
    cin>>tc;
    while(tc--){
        cin>>s;
        n=s.size();
        tmp.clear();
        Try(1);
        sort(tmp.begin(),tmp.end());
        for(int x :tmp){
            cout<<x<<endl;
        }
    }
}