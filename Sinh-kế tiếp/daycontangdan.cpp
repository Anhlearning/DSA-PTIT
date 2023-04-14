#include<bits/stdc++.h>
using namespace std;
int m,n,k,a[10000],ok,x[1000];;
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
        if(x[a[i]]>x[a[i+1]]){
            return 0;
        }
    }
    return 1;
}
int main() {
        cin>>n>>k;
        set<int>se;
        for(int i=1;i<=n;i++){
            cin>>x[i];
        }
        ktao();
        ok=1;
        int dem=0;
        while(ok){
        if(check()){
            dem++;
            for(int i=1;i<=k;i++){
                cout<<x[a[i]]<<" ";
            }
        }
        cout<<endl;
        sinh();
    }
    cout<<endl;
}
    
   
