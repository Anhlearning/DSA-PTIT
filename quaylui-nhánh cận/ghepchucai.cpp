#include<bits/stdc++.h>
using namespace std;
int used[100],n;
char c;
char a[1000];
void kq(){
    for(int i=1;i<=n;i++){
        cout<<a[i];
    }
    cout<<endl;
}
int check1(char c){
    if(c=='A'||c=='E') return 1;
    return 0;
}
int check(){
    for(int i=2;i<=n-1;i++){
       if(!check1(a[i-1])&&check1(a[i])&&!check1(a[i+1])){
            return 0;
       }
    }
    return 1;
}
void Try(int i){
   for(char j='A';j<=c;j++){
        if(used[j]){
            a[i]=j;
            used[j]=0;
            if(i==n){
                if(check()){
                kq();
                }
            }
            else {
                Try(i+1);
            }
            used[j]=1;
        }
   }
}
int main(){
    cin>>c;
    n=int(c-64);
    memset(used,1,sizeof(used));
    Try(1);
}