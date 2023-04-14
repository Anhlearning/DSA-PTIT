#include<bits/stdc++.h>
using namespace std;

int main(){
 int tc;
 cin>>tc;
 while(tc--){
   int n;
   cin>>n;
   int a[n];
   for(int &x:a) cin>>x;
   sort(a,a+n);
    int res=upper_bound(a,a+n,a[0])-a;
    if(res>n-1){
        cout<<-1<<endl;
    }
    else {
        cout<<a[0]<<" "<<a[1]<<endl;
    }
    
 }
}