#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    int a[n];
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='T'){
            a[i]=2;
        }
        if(s[i]=='X'){
            a[i]=1;
        }
        if(s[i]=='D'){
            a[i]=3;
        }
    }
    int dem=0;
    for(int i=0;i<s.size();i++){
        int pos=i;
        int amin=a[i];
        for(int j=i+1;j<s.size();j++){
            if(amin>a[j]){
                pos=j;
                amin=a[j];
            }
        }
        if(a[i]>amin){
            swap(a[i],a[pos]);
            dem++;
        }
    }
    cout<<dem<<endl;
}