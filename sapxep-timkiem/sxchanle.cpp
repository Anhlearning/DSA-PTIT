#include<bits/stdc++.h>
using namespace std;
int n,a[100000];


int main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    vector<int>tmp1;
    vector<int>tmp2;
    for(int i=1;i<=n;i++){
        if(i%2==1){
            tmp1.push_back(a[i]);
        }
        else tmp2.push_back(a[i]);
    }
    sort(tmp1.begin(),tmp1.end());
    sort(tmp2.begin(),tmp2.end(),greater<int>());
    int l1=0;
    int l2=0;
    while(l1<tmp1.size()&&l2<tmp2.size()){
        cout<<tmp1[l1]<<" "<<tmp2[l2]<<" ";
        l1++,l2++;
    }
    while(l1<tmp1.size()) {
        cout<<tmp1[l1]<<" ";
        l1++;
    }
     while(l2<tmp2.size()) {
        cout<<tmp2[l2]<<" ";
        l2++;
    }
}