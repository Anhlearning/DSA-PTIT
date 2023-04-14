#include<bits/stdc++.h>
using namespace std;
int a[1000],n,ok=1,cnt;

void ktao(){
    cnt=1;
    a[cnt]=n;
}
void sinh(){
    int i=cnt;
    while(a[i]==1&&i>=1){
        i--;
    }
    if(i==0) ok=0;
    else {
        a[i]--;
        int sum=cnt-i+1;
        for(int j=i+1;j<=i+sum/a[i];j++){
            a[j]=a[i];
        }
        cnt=i+sum/a[i];
        if(sum%a[i]!=0){
            cnt++;
            a[cnt]=sum%a[i];
        }
    }
    
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        cin>>n;
        ok=1;
        ktao();
        while(ok){
            cout<<"(";
            for(int i=1;i<=cnt;i++){
                cout<<a[i];
                if(i!=cnt)cout<<" ";
            }
            cout<<")";
            cout<<" ";
            sinh();
        }
        cout<<endl;
    }
}