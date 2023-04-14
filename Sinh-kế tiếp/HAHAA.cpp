#include<bits/stdc++.h>

using namespace std;
int a[10000],ok=1,n,k;
void ktao(){
    for(int i=1;i<=n;i++){
        a[i]=0;
    }
}
void sinh(){
    int i=n;
    while(a[i]==1&&i>=1){
        a[i]=0;
        --i;
    }
    if(i==0) ok=0;
    else  {
        a[i]=1;
    }
}
int  check(){
    if(a[1]!=1||a[n]!=0){
        return 0;
    }
    int d1=0;
    for(int i=1;i<=n;i++){
        if(a[i]==1){
            d1++;
        }
        if(a[i]==0){
            d1=0;
        }
        if(d1==2){
            return 0;
        }
    }
    return 1;
}

int main(){
   int tc;
   cin>>tc;
   while(tc--){
        cin>>n;
        ok=1;
        ktao();
        while(ok){
            if(check()){
                for(int i=1;i<=n;i++){
                    if(a[i]==1){
                        cout<<"H";
                    }
                    else cout<<'A';
                }
                cout<<endl;
            }
            sinh();
        }
   }
}
