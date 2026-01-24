#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n-1);

    for(int i=0; i<n-1; i++) {
        cin >> v[i];
    }

    int sum = 0;
    for(int i=0; i<n-1; i++) {
        sum += v[i];
    }
    
    cout << -1 * sum << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}