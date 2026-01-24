#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    map<int,int> m;

    for(int i=0; i<n; i++) {
        cin >> v[i];
        m[v[i]] = i;
    }

    for(int i : v) {
        int x = i - k;
        if(m.find(x) != m.end()) {
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