#include<bits/stdc++.h>
using namespace std;
 
vector<int>ke[1001];

int main(){
    int n;
    cin>>n;
    int a[n+5][n+5]={0};
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
            if(a[i][j]==1&&j>i){
                ke[i].push_back(j);
                ke[j].push_back(i);
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int x:ke[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}