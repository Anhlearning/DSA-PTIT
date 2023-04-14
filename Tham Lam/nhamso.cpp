#include<bits/stdc++.h>
using namespace std;

int sobe(int a , int b){
    string s1=to_string(a);
    string s2=to_string(b);
    for(int i=0;i<s1.size();i++){
        if(s1[i]=='6') s1[i]='5';
    }
    for(int i=0;i<s2.size();i++){
        if(s2[i]=='6') s2[i]='5';
    }
    int x=stoi(s1);
    int y=stoi(s2);
    return x+y;
}

int   solon(int a , int b){
    string s1=to_string(a);
    string s2=to_string(b);
    for(int i=0;i<s1.size();i++){
        if(s1[i]=='5') s1[i]='6';
    }
    for(int i=0;i<s2.size();i++){
        if(s2[i]=='5') s2[i]='6';
    }
    int x=stoi(s1);
    int y=stoi(s2);
    return x+y;
}


int main(){
    int a,b;
    cin>>a>>b;
    cout<<sobe(a,b)<<" "<<solon(a,b);
}