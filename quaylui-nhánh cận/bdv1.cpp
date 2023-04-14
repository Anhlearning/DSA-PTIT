#include<bits/stdc++.h>
using namespace std;
int a[1000],used[1000],n,k,s,c=0;
int min_val=1e9;

void Try(int dem,int sum){
    if(n==1){
        min_val=min(dem,min_val);
        return;
    }
}


int main(){
   int tc;
   cin>>tc;
   while(tc--){
        cin>>n;
        int dem=0;
        while(n>1){
            dem++;
            if(n%2==0){
                n/=2;
            }
            if(n%3==0) n/=3;
            else {
                n--;
            }
        }
    cout<<dem<<endl;
   }
}