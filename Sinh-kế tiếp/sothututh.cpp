#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int n,k,a[10000],x[1000],ok;
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
int check(){
    for(int i=1;i<=k;i++){
        if(a[i]!=x[i])return 0;
    }
    return 1;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        cin>>n>>k;
        for(int i=1;i<=k;i++){
            cin>>x[i];
        }
        ok=1;
        ktao();
        int dem=1;
        while(ok){
            if(!check()){
                dem++;
            }
            else {
                break;
            }
            sinh();
        }
        cout<<dem<<endl;
    }

}