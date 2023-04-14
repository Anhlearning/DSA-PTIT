#include<bits/stdc++.h>
using namespace std;
int main(){
 int tc;
 cin>>tc;
 while(tc--){
       int n;
    cin>>n;
    int a[n+5];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int min_val=1e9;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){    
            if(abs(min_val)>abs(a[i]+a[j])){
                min_val=a[i]+a[j];
            }
        }
    }
    cout<<min_val<<endl;
 }
}