#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x,k;
    cin >> x >> k;

    if(x<k) {
        cout << "1\n" << x << endl;
        return;
    }

    else if(x%k == 0) {
        int m = ((x/k)-1)*k + 1;
        cout << "2\n" << m << " " << (x-m) << endl;
        return;
    }

    else {
        cout << "1\n" << x << endl;
        return;
    }
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}