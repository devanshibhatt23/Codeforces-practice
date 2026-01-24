// k=3
// 3 4 1 5 
// 3
// 4
// 1
// 5
// 3 4
// 4 1
// 1 5
// 3 4 1
// 4 1 5
// 3 4 1 5

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    for(int i=0; i<n; i++) {
        if(k==v[i]) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}