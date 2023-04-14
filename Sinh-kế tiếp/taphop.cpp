#include<bits/stdc++.h>

using namespace std;

int a[10000],ok=1,n,k,s;
void ktao(){
    for(int i=1;i<=k;i++){
        a[i]=i;
    }
}
void sinh(){
    int i=k;
    while(a[i]==n-k+i&&i>=1){
        i--;
    }
    if(i==0) ok=0;
    else {
        a[i]++;
        for(int j=i+1;j<=k;j++){
            a[j]=a[j-1]+1;
        }
    }
}

int main(){
    while(1){
        cin>>n>>k>>s;
        if(n==0&&k==0&&s==0){
            break;
        }
        if(n<k){
            cout<<0<<endl;
        }
        else {
        ok=1;
        int dem=0;
        ktao();
            while(ok){
                int tmp=0;
                for(int i=1;i<=k;i++){
                  tmp+=a[i];
                 }
                 if(tmp==s){
                        dem++;
                      }
                 sinh();
             }
    cout<<dem<<endl;
    }
    }
}

