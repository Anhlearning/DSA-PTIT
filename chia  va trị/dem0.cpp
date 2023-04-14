#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int a[n];
        int d[2]={0};
        for(int &x:a) {
            cin>>x;
            d[x]++;
        }
        cout<<d[0]<<endl;
    }
}