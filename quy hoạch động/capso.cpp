#include<bits/stdc++.h>
using namespace std;
using ll=long long; 

ll mod =1e9+7;

bool cmp(pair<int,int>p1,pair<int,int>p2){
    return p1.second<p2.second;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        pair<int,int>p[n];
        for(int i=0;i<n;i++){
            cin>>p[i].first>>p[i].second;
        }
        sort(p,p+n,cmp);
        int prev=-1e9;
        int ans=0;
        for(int i=0;i<n;i++){
            if(p[i].first>prev){
                ans++;
                prev=p[i].second;
            }
        }
        cout<<ans<<endl;
    }
}