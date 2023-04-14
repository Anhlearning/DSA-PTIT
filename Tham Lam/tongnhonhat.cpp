#include<bits/stdc++.h>

using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        string s1="";
        string s2="";
        for(int i=0;i<n;i++){
            if(i%2==0) s1+=to_string(a[i]);
            else {
                s2+=to_string(a[i]);
            }
        }
        cout<<stoi(s1)+stoi(s2)<<endl;
    }
}