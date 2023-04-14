#include <bits/stdc++.h>

using namespace std;

int n, k;
int a[25], b[25], dem = 0;

int ok = 0;

void khoitao() {
    for (int j = 1; j <= n; j++) {
        b[j] = 0;
    }
}

void in() {
    for (int j = 1; j <= n; j++) {
        if (b[j] == 1) cout << a[j] << " ";
    }
}

void check() {
    int sum = 0;
    for (int j = 1; j <= n; j++) {
        sum+= a[j]*b[j];
    }
    if (sum == k) {
        dem++;
        in();
    }
}

void sinh() {
    int i = n;
    while ( i >=1 && b[i] == 1) {
        b[i] = 0;
        i--;
    }
    if ( i == 0 ) ok = 1;
    else b[i] = 1;

}

int main() {
   cin >> n >> k;
   ok=0;
   for (int i = 1; i <= n; i++) {
        cin >> a[i];
   }
   khoitao();
   while ( ok == 0) {
        check();
        sinh();
   }
   cout <<endl << dem;


}