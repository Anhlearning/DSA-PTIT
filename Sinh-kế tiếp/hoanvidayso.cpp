#include<bits/stdc++.h>

using namespace std;

int a[1000],n,ok=1,m;
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
    if(a[n]==m) return 1;
    return 0;
}
int main(){
        cin>>n>>m;
        ktao();
        ok=1;
        while(ok){
            if(check()){
                for(int i=1;i<=n;i++){
                    cout<<a[i]<<" ";
                }
                cout<<endl;
            }
            sinh();
        }

}