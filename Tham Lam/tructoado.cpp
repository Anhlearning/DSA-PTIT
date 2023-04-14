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
       pair<int,int>p[n];
       for(int i=0;i<n;i++){
            cin>>p[i].first>>p[i].second;
       }
         sort(p,p+n,cmp);
       int dem=1;
       int cot=p[0].second;
       for(int i=1;i<n;i++){
            if(p[i].first>=cot){
                dem++;
                cot=p[i].second;
            }
       }
       cout<<dem<<endl;
    }
}