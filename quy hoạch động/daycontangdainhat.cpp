#include<bits/stdc++.h>
using namespace std;
using ll=long long; 



int main(){
    string s;
    cin>>s;
   int f[s.size()];
   int kq=0;
   for(int i=0;i<s.size();i++){
        f[i]=1;
        for(int j=0;j<i;j++){
            if(s[i]>=s[j]){
                    f[i]=max(f[i],f[j]+1);
            }
        }
        kq=max(kq,f[i]);
   }
   cout<<kq<<endl;
}