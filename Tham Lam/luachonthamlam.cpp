#include<bits/stdc++.h>

using namespace std;


int main(){
        int s,d;
        cin>>d>>s;
        if(s>9*d||s==0&&d>1) {
            cout<<"-1 -1";
            return 0 ;
        }
          int tmp=s;
          int lon[d]={0},be[d]={0};
          for(int i=0;i<d;i++){
            if(s>=9){
                lon[i]=9;
                s-=9;
            }
            else if(s!=0){
                lon[i]=s;
                s=0;
            }
            else break;
          }
          tmp--;
          for(int i=d-1;i>0;i--){
            if(tmp>=9){
                be[i]=9;
                tmp-=9;
            }
            else if(tmp!=0){
                be[i]=tmp;
                tmp=0;
            }
            else break;
          }
          be[0]=tmp+1;
          for(int i=0;i<d;i++){
            cout<<be[i];
          }
          cout<<" ";
          for(int i=0;i<d;i++){
            cout<<lon[i];
          }
 }
    