#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int>p1,pair<int,int>p2){
    return p1.second<p2.second;
}

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        pair<int,int>p[n+3];
        for(int i=1;i<=n;i++){
            cin>>p[i].first;
        }
        for(int i=1;i<=n;i++){
            cin>>p[i].second;
        }
        sort(p+1,p+n+1,cmp);
        int time=p[1].second;
        int dem=1;
        for(int i=2;i<=n;i++){
            if(p[i].first>=time){
                dem++;
                time=p[i].second;
            }
        }
        cout<<dem<<endl;
    }
}