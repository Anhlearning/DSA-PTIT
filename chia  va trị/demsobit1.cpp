#include<bits/stdc++.h>
using namespace std;

vector<long long >a;
using ll=long long ;
void center(long long n){
    long long  t=0;
    long long mu=1;
    while(n/2>0){
        t++;
        if(t==1) {
            a.push_back(2);
            mu=2;
        }
        else {
            mu*=2;
            a.push_back(mu);
        }
        n/=2;
    }
}
long long val(long long k , long long n, long long pos){
    if(k%2==1) return (ll)1;
    if(k<a[pos]){
        return val(k,n/2,pos-1);
    }
    else if(a[pos]==k) return n%2;
    else if(k>a[pos]){
        return val(2*a[pos]-k,n/2,pos-1);
    }
}

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        long long n,l,r,res=0;
        cin>>n>>l>>r;
        a.clear();
        center(n);
        for(long long i=l;i<=r;i++){
            res+=val(i,n,a.size()-1);
        }
        cout<<res<<endl;
    }
}