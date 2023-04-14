
#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endln '\n'

using namespace std;

int sti(string s){
    int n = 0;
    for(int i=0; i<s.size(); i++){
        n = n*10 + s[i] - '0';
    }
    return n;
}

int main(){
    faster();
    int n, k; cin >> n >> k;
    vector<string> a(n);
    int b[k+1];
    vector<string> v;
    int MIN = 1e9;
    for(int i=0; i<n; i++){
        cin >> a[i];
        a[i] = "0" + a[i];
    }
    for(int i=1; i<=k; i++) b[i] = i;
    do{
        v.clear();
        for(int i=0; i<n; i++){
            string s = a[i];
            for(int j=1; j<=k; j++){
                s[j] = a[i][b[j]];
            }
            v.push_back(s);
        }
        sort(v.begin(), v.end());
        MIN = min(MIN, sti(v[v.size()-1]) - sti(v[0]));
    } while(next_permutation(b+1, b+k+1));
    cout << MIN;
    return 0;
}