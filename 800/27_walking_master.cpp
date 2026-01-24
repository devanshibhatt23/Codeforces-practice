#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x,y,a,b;
    cin >> x >> y >> a >> b;

    int m = b - y;
    int n = x + m - a;
    if(n<0 || m<0) {
        cout << "-1\n";
        return;
    }
    else {
        cout << m + n << endl;
    }
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}