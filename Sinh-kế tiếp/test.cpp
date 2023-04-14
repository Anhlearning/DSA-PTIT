#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int cot[1000],xuoi[1000],nguoc[1000],n,X[100],kq,dem;
void Try(int i){
    for(int j = 1; j <= n; j++){
        if(cot[j] == false && xuoi[i - j + n] == false && nguoc[i + j - 1] == false){
            X[i] = j;
            cot[j] = true;
            xuoi[i - j + n] = true;
            nguoc[i + j - 1] = true;
            if(i == n){
                ++dem;
            }
            else{
                Try(i + 1);
            }
            cot[j] = false;
            xuoi[i - j + n] = false;
            nguoc[i + j - 1] = false;
        }
    }
}
int main() {
    cin>>n;
    memset(cot,false,sizeof(cot));
    memset(xuoi,false,sizeof(cot));
    memset(nguoc,false,sizeof(cot));
    Try(1);
    cout<<dem<<endl;
    
}
