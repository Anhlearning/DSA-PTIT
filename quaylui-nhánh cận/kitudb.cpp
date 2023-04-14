#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        string s;
        cin>>s;
    long long n,k;
    cin>>k;
    n=s.size();
    while(k>n)n*=2;
    while(n>s.size()){
        if(k>n/2){
            k-=n/2;
            if(k>1) k-=1;
            else {
                k=n/2;
            }
        }
        n/=2;
    }
    cout<<s[k-1]<<endl;
    }
}