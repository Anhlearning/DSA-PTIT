#include<bits/stdc++.h>
using namespace std;
int a[1000],used[1000],n,k,s,c=0;
int min_val=1e9;
/*
cơ sở của bài toán : tìm cách đưa phần tử thứ i về 1
với dp[1]=0;
    dp[2]=1;
    dp[3]=min(dp[2]+1 or dp[1]+1);
    .
    .
    .
    dp[n]=min(dp[n-1]+1,dp[n/2]+1,dp[n/3]+1);
*/
int step(int n , int a[]){
    if(n==1){
        return 0;
    }
    if(a[n]!=0){
        return a[n];
    }
    int d1=step(n-1,a)+1;
    int d2=1e9,d3=1e9;
    if(n%2==0){
     d2=step(n/2,a)+1;
    }
    if(n%3==0){
     d3=step(n/3,a)+1;
    }
    return a[n]=min({d1,d2,d3});
    
}


int main(){
   int tc;
   cin>>tc;
   while(tc--){
        int n;
        cin>>n;
        int a[n+1];
        memset(a,0,sizeof(a));
        cout<<step(n,a)<<endl;
   }
}