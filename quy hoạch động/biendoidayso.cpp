#include<bits/stdc++.h>
using namespace std;
using ll=long long ;




int main(){
    int tc;
    cin>>tc;
    while(tc--){
        ll n;
        cin>>n;
        ll a[n],b[n];
        int c[n];
        for(int i=0;i<n;i++){
            cin>>a[i]>>b[i];
            c[i]=a[i];
        }
        int cong[n],tru[n];
        for(int i=0;i<n;i++){
            cong[i]=a[i]+b[i];
        }
        for(int i=0;i<n;i++){
            tru[i]=a[i]-b[i];
        }
        sort(c,c+n);
        long long cnt=0;
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                if(b[i]<b[i+1]){
                    int sum =binary_search(c,c+n,cong[i]);
                    int divide=binary_search(c,c+n,tru[i]);
                    if(divide==-1){
                        cnt+=b[i];
                        a[i]-=b[i];
                    }
                    else if(sum==-1){
                        cnt+=b[i];
                        a[i]+=b[i];
                    }
                    else {
                        if(b[divide]>b[sum]){
                            cnt+=b[i];
                            a[i]+=b[i];
                        }
                        else {
                            cnt+=b[i];
                            a[i]-=b[i];
                        }
                    }
                }
                }
                else {
                    int sum =binary_search(c,c+n,cong[i+1]);
                    int divide=binary_search(c,c+n,tru[i+1]);
                    if(divide==-1){
                        cnt+=b[i+1];
                        a[i+1]-=b[i+1];
                    }
                    else if(sum==-1){
                        cnt+=b[i+1];
                        a[i+1]+=b[i+1];
                    }
                    else {
                        if(b[divide]>b[sum]){
                            cnt+=b[i+1];
                            a[i+1]+=b[i+1];
                        }
                        else {
                            cnt+=b[i+1];
                            a[i+1]-=b[i+1];
                        }
                    }
                }
            }
            cout<<cnt<<endl;
        }
    }
