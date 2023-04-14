#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int n,k,a[10000],ok;
void ktao(){
    for(int i=1;i<=k;i++){
        a[i]=i;
    }
}
void sinh(){
    int i=k;
    while(a[i]==n-k+i&&i>=1){
        --i;
    }
    if(i==0)ok=0;
    else {
        a[i]++;
        for(int j=i+1;j<=k;j++){
            a[j]=a[j-1]+1;
        }
    }
}
int main() {
    int tc;
    cin>>tc;
    while(tc--){
        cin>>n>>k;
        ktao();
         ok=1;
        while(ok){
        for(int i=1;i<=k;i++){
            cout<<a[i];
        }
        cout<<" ";
        sinh();
    }
    cout<<endl;
    }
    
   
}