#include<bits/stdc++.h>

using namespace std;

int a[1000],n,ok=1;
void ktao(){
    for(int i=1;i<=n;i++){
        a[i]=6;
    }
    a[1]=8;
    a[n]=6;
}
void sinh(){
    int i=n-1;
    while(a[i]==8&&i>=2){
        a[i]=6;
        i--;
    }
    if(i<=1) ok=0;
    else {
       a[i]=8;
    }
}   
int check(){
    int d8=0,d6=0;
    for(int i=1;i<=n;i++){
        if(a[i]==8) {
            d8++;
            d6=0;
            }
        if(a[i]==6){
            d6++;
            d8=0;
        } 
        if(d8>=2) return 0;
        if(d6>3){
            return 0;
        }
    }
    return 1;
}
int main(){
    
        cin>>n;
        ok=1;
        ktao();
        while(ok){
            if(check()){
            for(int i=1;i<=n;i++){
                cout<<a[i];
            }
            cout<<endl;
            }
            sinh();
        }
    

}