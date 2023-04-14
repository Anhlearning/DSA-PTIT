#include<bits/stdc++.h>
using namespace std;
using ll=long long; 

ll mod =1e9+7;


int main(){
       int tc;
       cin>>tc;
       while(tc--){
            ll n;
            cin>>n;
            if(n==1){
                cout<<1;
            }
            else {
                int d[10]={0};
                for(int i=9;i>=2;i--){
                    while(n%i==0){
                        n/=i;
                        d[i]++;
                    }
                }
                if(n!=1){
                    cout<<-1;
                }
                else {
                    for(int i=2;i<=9;i++){
                        for(int j=1;j<=d[i];j++){
                            cout<<i;
                        }
                    }
                }
            }
            cout<<endl;
       }
}