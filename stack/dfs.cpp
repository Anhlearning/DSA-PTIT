#include<iostream> 
#include<stack>
using namespace std;
class Graph { 
    private: int n, a[101][101], visited[101]; 
    public: void Input(); 
    void varInit();
    void DFS(int u); }; 
void Graph::Input() {
    cin >> n; 
    for(int i=1; i<=n; ++i)
    for(int j=1; j<=n; ++j) 
    cin >> a[i][j]; }
void Graph::varInit() { 
    for(int i=1; i<=n; ++i) 
    visited[i]=0; } 
void Graph::DFS(int u) {
    stack<int> s; 
    visited[u]=1;
    s.push(u); 
while(!s.empty()) { int k = s.top();
        s.pop(); 
        cout << k << " "; 
for(int v = n; v>0; v--) {
    if(a[k][v]!=0 && !visited[v]) { 
    s.push(v); visited[v]=1;
            } 
         } 
    }
}
int main() {
    Graph a; 
    a.Input(); 
    a.varInit(); 
    a.DFS(1); 
}