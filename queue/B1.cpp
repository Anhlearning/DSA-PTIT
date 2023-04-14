#include<bits/stdc++.h>
using namespace std;


int main(){
        int tc;
        cin>>tc;
        while(tc--){
            queue<int>qe;
            int q;
            cin>>q;
            while(q--){
                int x;
                cin>>x;
                if(x==1){
                   cout<<qe.size()<<endl;
                }
                else if(x==2){
                    if(!qe.empty()){
                        cout<<"NO"<<endl;
                    }
                    else cout<<"YES"<<endl;
                }
                else if(x==3){
                    int tmp;
                    cin>>tmp;
                    qe.push(tmp);
                }
                else if(x==4){
                    if(!qe.empty()){
                        qe.pop();
                    }
                }
                else if(x==5){
                    if(!qe.empty()){
                        cout<<qe.front()<<endl;
                    }
                    else cout<<-1<<endl;
                }
                else if(x==6){
                    if(qe.empty()){
                        cout<<-1<<endl;
                    }
                    else {
                        cout<<qe.back()<<endl;
                    }
                }
            }
        cout<<endl;
        }
}