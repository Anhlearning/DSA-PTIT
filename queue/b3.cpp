#include<bits/stdc++.h>
using namespace std;


int main(){
        int tc;
        cin>>tc;
        cin.ignore();
        queue<int>qe;
        while(tc--){
            string s;
            getline(cin,s);
            stringstream ss(s);
            string word;
            vector<string>ve;
            while(ss>>word){
                ve.push_back(word);
            }
            if(ve[0]=="PUSH"){
                qe.push(stoi(ve[1]));
            }
            else if(ve[0]=="POP"){
                if(!qe.empty()){
                    qe.pop();
                }
            }
            else {
                if(!qe.empty()){
                    cout<<qe.front()<<endl;
                }
                else {
                    cout<<"NONE"<<endl;
                }
            }
        }
}