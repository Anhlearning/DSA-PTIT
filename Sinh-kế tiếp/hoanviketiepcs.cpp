#include<bits/stdc++.h>

using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int q;
        string s;
        cin>>q>>s;
        if(next_permutation(s.begin(),s.end())){
            cout<<q<<" "<<s<<endl;
        }
        else {
            cout<<q<<" "<<"BIGGEST"<<endl;
        }
    }
}
