#include<bits/stdc++.h>

using namespace std;

char c[3]={'A','B','C'};
void thap(int n, int i ,int j ,int k){
    if(n==1) {
        cout<<c[i]<<" -> "<<c[j]<<endl;
    }
    else {
        thap(n-1,i,k,j);
        cout<<c[i]<<" -> "<<c[j]<<endl;
        thap(n-1,k,j,i);
    }
}

int main(){
    int n;
    cin>>n;
    thap(n,0,2,1);
}