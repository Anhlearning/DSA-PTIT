#include<bits/stdc++.h>

using namespace std;

int a[1000],x[10000],n,ok=1;
void ktao(){
    for(int i=1;i<=n;i++){
        a[i]=i;
    }
}
void sinh(){
    int i=n-1;
    while(a[i]>a[i+1]&&i>=1){
        i--;
    }
    if(i==0) ok=0;
    else {
        int j=n;
        while(a[i]>a[j]){
            j--;
        }
        swap(a[i],a[j]);
        reverse(a+i+1,a+n+1);
    }
}
int check(){
    for(int i=1;i<=n;i++){
        if(a[i]!=x[i])return 0;
    }
    return 1;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        cin>>n;
        for(int i=1;i<=n;i++){
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