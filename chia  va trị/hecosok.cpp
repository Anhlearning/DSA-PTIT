#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int k;
        string a,b;
        cin>>k>>a>>b;
        string s="";
        while(a.size()<b.size())a="0"+a;
        while(a.size()>b.size())b="0"+b;
        int n=a.size()-1;
        int nho=0;
        for(int i=n;i>=0;i--){
            int tmp=int(a[i]-'0')+int(b[i]-'0')+nho;
            s=to_string(tmp%k)+s;
            nho=tmp/k;
        }
        if(nho)s=to_string(nho)+s;
        cout<<s<<endl;
    }
}