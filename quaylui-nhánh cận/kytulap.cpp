#include<bits/stdc++.h>
using namespace std;

/*
lặp hoán vị n xâu  string
mỗi lần sinh hoán vị sẽ so sánh với số lần lặp 
*/
int vt[100],n,used[100],res=1e9;
string s[15];
int check(){
    int dem=0;
    for(int i=1;i<=n-1;i++){
        int l1=s[vt[i]].size();
        int l2=s[vt[i+1]].size();
        int j=0,k=0;
        while(j<l1&&k<l2){
                if(s[vt[i]][j]==s[vt[i+1]][k]){
                    dem++;
                    j++,k++;
                }
                else if(s[vt[i]][j]>s[vt[i+1]][k]){
                    k++;
                }
                else j++;
        }
    }
    return dem;
}
void Try(int i){
    for(int j=1;j<=n;j++){
        if(used[j]){
            vt[i]=j;
            used[j]=0;
            if(i==n){
              int tmp=check();
              res=min(tmp,res);
            }
            else {
                Try(i+1);
            }
            used[j]=1;
        }
    }
}
int main(){
    cin>>n;
    memset(used,1,sizeof(used));
    for(int i=1;i<=n;i++){
        cin>>s[i];
    }
    Try(1);
    cout<<res<<endl;
}