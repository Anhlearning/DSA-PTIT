#include<bits/stdc++.h>
using namespace std;
int a[1000],n;


int check(){
    if(a[5]!=2||a[1]==0&&a[2]==0||a[3]==0&&a[4]==0) return 0;
    string s=to_string(a[3])+to_string(a[4]);
    if(s>"12") return 0;
   return 1;
}
int dem=0;
void Try(int i){
    for(int j=0;j<=2;j+=2){
        a[i]=j;
        if(i==8){
            // string s="";
            // string res="";
            // for(int i=1;i<=n;i++){
            //     s+=to_string(a[i]);
            // }
            // res=s;
            // reverse(s.begin(),s.end());
             if(check()){
                for(int i=1;i<=n;i++){
                    if(i==2||i==4){
                        cout<<a[i]<<"/";
                    }
                    else cout<<a[i];
                }
                cout<<endl;
            }
        }
        else {
            Try(i+1);
        }
    }
}
int main(){
    // int tc;
    // cin>>tc;
    // while(tc--){
       n=8;
       Try(1);
      
}