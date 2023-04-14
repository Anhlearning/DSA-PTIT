#include <bits/stdc++.h>
using namespace std;
vector<string>ve;
void TestCase() {
    int n; cin >> n;
    queue<string> q;
    vector<int> a = {2, 3, 5, 7};
    do {
        int x = 0;
        for (int i : a)
            x = x * 10 + i;
        if (x % 2 != 0)
            q.push(to_string(x));
    } while (next_permutation(a.begin(), a.end()));

    while (!q.empty()) {
        string s = q.front();
        q.pop();
        if (s.back() != '2')
            cout << s << endl;
        if (s.length() == n)
            break;
        q.push(s + '2');
        q.push(s + '3');
        q.push(s + '5');
        q.push(s + '7');
    }
    while (!q.empty()) {
        if (q.front().back() != '2')
           ve.push_back(q.front());
        q.pop();
    }
}

int main() {
        TestCase();
        sort(ve.begin(),ve.end());
        for(string x:ve){
            cout<<x<<endl;
        }
}