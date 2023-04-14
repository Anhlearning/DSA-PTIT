#include<bits/stdc++.h>

using namespace std;
int c[1000][1000],a[1000],n,k,ok=0,cot[1000],hang[1000],cnt=0;
vector<string>v;

void kqua(){
    string s="";
    for(int i=1;i<=n;i++){
        s+=to_string(a[i]);
    }
    v.push_back(s);
}
void nhap(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>c[i][j];
        }
    }
}
int check(){
    int dem=0;
    for(int i=1;i<=n;i++){
        dem+=c[i][a[i]];
    }
    if(dem==k){
        return 1;
    }
    return 0;
}
void Try(int i){
    for(int j=1;j<=n;j++){
        if(cot[j]){
            a[i]=j;
            cot[j]=0;
            if(i==n){
                if(check()){
                cnt++;
                kqua();
                }
            }
            else {
                Try(i+1);
            }
            cot[j]=1;
        }
    }
}

int main(){
    nhap();
    memset(cot,1,sizeof(cot));
    Try(1);
    cout<<cnt<<endl;
    for(int i=0;i<v.size();i++){
        for(char x: v[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }

}
