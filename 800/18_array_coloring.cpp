#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    int sum = accumulate(v.begin(), v.end(), 0);

    if(sum%2==0) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}