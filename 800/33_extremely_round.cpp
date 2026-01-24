#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    if(n<=10) {
        cout << n << endl;
    }
    else if(n<=100) {
        int k = n/10;
        cout << k+9 << endl;
    }
    else if(n<=1000) {
        int k = n/100;
        cout << k+18 << endl;
    }
    else if(n<=10000) {
        int k = n/1000;
        cout << k+27 << endl;
    }
    else if(n<=100000) {
        int k = n/10000;
        cout << k+36 << endl;
    }
    else if(n<=1000000) {
        int k = n/100000;
        cout << k+45 << endl;
    }
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}