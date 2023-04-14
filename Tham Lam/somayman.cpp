#include<bits/stdc++.h>
using namespace std;

using ll=long long ;
int cnt=1e9+7;
int check(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]!='4'&&s[i]!='7'){
            return 0;
        }
    }
    return 1;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
       int n;
       cin>>n;
       string s="";
       int tmp=28;
       if(n%4==0&&n%7!=0){
            
       }
       while(n){
            if(n>=7){
                s='7'+s;
                n-=7;
            }
            else if(n!=0){
                s=to_string(n)+s;
                n=0;
            }
            else break;
       }
       if(check(s)) cout<<s<<endl;
       else cout<<-1<<endl;
       

    }
}