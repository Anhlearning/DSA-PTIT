#include<bits/stdc++.h>

using namespace std;


int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int s,d;
        cin>>s>>d;
        int a[d]={0};
        if(s>9*d||s==0&&d>1) cout<<-1;
        else {
            s--;
        for(int i=d-1;i>0;i--){
            if(s>=9){
                a[i]=9;
                s-=9;
            }
            else if(s!=0){
                a[i]=s;
                s=0;
            }
            else break;
        }
        a[0]=s+1;
        for(int i=0;i<d;i++){
            cout<<a[i];
        }
        cout<<endl;
        }
    cout<<endl;
    }
}