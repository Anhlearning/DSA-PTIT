#include<bits/stdc++.h>

using namespace std;
int n,k,a[10000];
void in(){
    for(int i=1;i<=k;i++){
        cout<<n-k+i<<" ";
    }
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        cin>>n>>k;
        for(int i=1;i<=k;i++){
            cin>>a[i];
        }
        int i=k;
        while(a[i]==a[i-1]+1&&i>=1){
                i--;
         }
        if(i==0){
            in();
        } 
        else {
            a[i]--;
            if(a[k]!=n){
                for(int j=i+1;j<=k;j++){
                    a[j]++;
                }
            }
            for(int i=1;i<=k;i++){
                cout<<a[i]<<" ";
            }
        }
        
        cout<<endl;
    }
}

