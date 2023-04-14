#include<bits/stdc++.h>
using namespace std;


int main(){
        int tc;
        cin>>tc;
        deque<int>q;
        string s;
        int n;
        while(tc--){
            cin>>s;
            if(s=="PUSHBACK"){
                cin>>n;
                q.push_back(n);
            }
            else if(s=="PUSHFRONT"){
                cin>>n;
                q.push_front(n);
            }
            else if(s=="PRINTFRONT"){
                if(!q.empty()){
                    cout<<q.front()<<endl;
                }
                else cout<<"NONE"<<endl;
            }
            else if(s=="POPFRONT"){
                if(!q.empty()){
                    q.pop_front();
                }
            }
            else if(s=="PRINTBACK"){
                if(!q.empty()){
                    cout<<q.back()<<endl;
                }
                cout<<"NONE"<<endl;
            }
            else if(s=="POPBACK"){
                if(!q.empty()){
                    q.pop_back();
                }
            }
        }
}