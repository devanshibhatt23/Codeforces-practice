// bobritto bandito

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, l, r;
    cin >> n >> m >> l >> r;

    int d = n - m;
    int v1 = min(r,d);
    r = r - v1;
    d = d - v1;

    int v2 = min(-l, d);
    l = l + v2;
    d = d - v2;

    cout << l << " " << r << endl;
}

int main() {
    int t=1;
    cin >> t;
    while(t--) {
        solve();
    }
}