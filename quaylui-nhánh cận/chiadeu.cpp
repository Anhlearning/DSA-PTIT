#include<bits/stdc++.h>
using namespace std;
int n,k,s,a[50],x[50];
int dem=0;
vector<int>tmp;
void Try(int i,int bd , int sum){   
    
    for(int j=bd;j<=n;j++){
        if(sum+a[j]<=s){
            x[i]=a[j];
            tmp.push_back(x[i]);
            if(sum+a[j]==s){
                dem++;
            }
            }
            Try(i+1,j+1,sum+a[j]);
            tmp.pop_back();
        }
}



int main(){
    cin>>n>>k;
    int sum=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%k!=0){
        return 0;
    }
    else {
        s=sum/k;
        Try(1,1,0);
        cout<<dem<<endl;
    }
}