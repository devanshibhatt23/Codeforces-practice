#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;

    vector<int> v(n);

    int odd = 0, even = 0;
    for(int i=0; i<n; i++) {
        cin >> v[i];
        if(v[i] % 2) odd++;
        else even++;
    }

    if(odd == 0 || even == 0) {
        for(int i : v) cout << i << " ";
        cout << endl;
    }

    else {
        sort(v.begin(), v.end());
        for(int i : v) cout << i << " ";
        cout << endl;
    }
}

int main() {
    int t = 1;
    cin >> t;

    while(t--) {
        solve();
    }
}