#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endln '\n'

using namespace std;

int n, k, X[1005], a[1005];
vector<string> v;

void check(){
    string s = "";
    int sum = 0; 
    for(int i=1; i<=n; i++){
        if(X[i]==1){
            sum += a[i];
            s += to_string(a[i]) + " ";
        }
    }
        if(sum > k) return;
        else if(sum == k){
            s.pop_back();
            v.push_back(s);
            return;
        }
    
}

void Try(int i){
    for(int j=0; j<=1; j++){
        X[i] = j;
        if(i==n) check();
        else Try(i+1);
    }
}

int main(){
    faster();
    cin >> n >> k;
    for(int i=1; i<=n; i++) cin >> a[i];
    sort(a+1, a+n+1);
    Try(1);
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<"["<<v[i]<<"]"<<endl;
    }
    return 0;
}