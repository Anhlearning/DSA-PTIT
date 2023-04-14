#include<bits/stdc++.h>
using namespace std;

int prime[10006];
void sang(){
    prime[0]=prime[1]=0;
    for(int i=2;i<=10006;i++){
        prime[i]=1;
    }
    for(int i=2;i<=10006;i++){
        if(prime[i]){
        for(int j=i*2;j<=10006;j+=i){
            prime[j]=0;
            }
        }
    }
}
char x[10]={'0','1','2','3','4','5','6','7','8','9'};

int main(){
    int tc;
    cin>>tc;
    sang();
    for(int i=1087;i<=9999;i++){
        cout<<prime[i]<<" ";
    }
    while(tc--){
        string s,t;
        cin>>s>>t;
        queue<pair<string,int>>q;
        set<string>se;
        se.insert(s);
        q.push({s,0});
        while(!q.empty()){
            pair<string,int>top=q.front();
            q.pop();
            if(top.first==t){
                cout<<top.second<<endl;
                break;
            }
            string tmp=top.first;
            for(int i=0;i<tmp.size();i++){
                char statics=tmp[i];
                    for(char j:x){
                        tmp[i]=j;
                        if(prime[stoi(tmp)]&&!se.count(tmp)){
                            q.push({tmp,top.second+1});
                            se.insert(tmp);
                        }
                    }
                tmp[i]=statics;
            }
        }

    }    
}