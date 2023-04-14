#include<bits/stdc++.h>

using namespace std;

int x[10]={1000,500,200,100,50,20,10,5,2,1};

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int dem=0;
        for(int i=0;i<10;i++){
            dem+=n/x[i];
            n=n-(n/x[i])*x[i];
        }
        cout<<dem<<endl;
    }
}