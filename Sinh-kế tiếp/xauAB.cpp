#include<bits/stdc++.h>

using namespace std;
int a[10000],ok=1,n;
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

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        cin>>n;
        ktao();
        ok=1;
        while(ok){
             for(int i=1;i<=n;i++){
            if(a[i]==0){
                cout<<'A';
            }
            else {
                cout<<'B';
            }
         }
          cout<<" ";
          sinh();
        }
        cout<<endl;
    }

}