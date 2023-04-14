#include<bits/stdc++.h>

using namespace std;
int a[100],n,used[100],ok,x[100];
vector<vector<int > >v;
int check(int n){
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
void Try(int i,int bd,int sum){
    for(int j=bd;j<=n;j++){
        if(!used[j]){
            used[j]=1;
            a[i]=x[j];
            sum+=x[j];
            if(check(sum)){
                vector<int>tmp;
                for(int u=1;u<=i;u++){
                    tmp.push_back(a[u]);
                }
                v.push_back(tmp);
            }
            Try(i+1,j+1,sum);
            used[j]=0;
            sum-=a[i];
        }
    }
}

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        cin>>n;
        for(int i=1;i<=n;i++) cin>>x[i];
        sort(x+1,x+n+1,greater<int>());
        v.clear();
        Try(1,1,0);
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
           for(int x:v[i]){
                cout<<x<<" ";
           }
           cout<<endl;
        }
    }
}