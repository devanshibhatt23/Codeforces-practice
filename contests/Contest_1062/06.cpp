#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, x;
    cin >> n >> k >> x;

    vector<int> v(n);

    for(int i=0; i<n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    vector<int> vec(n);
    vec[0] = v[0] - 0;

    for(int i=1; i<n; i++) {
        vec[i] = v[i] - v[i-1];
    }

    // vec[n] = x - v[n-1];

    for(int i : vec) cout << i << " ";
    cout << endl;
}

int main() {
    int t = 1;
    cin >> t;

    while(t--) {
        solve();
    }
}