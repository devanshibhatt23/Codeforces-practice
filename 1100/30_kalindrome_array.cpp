#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<ll> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    int st = 0, end = n-1;

    while(st <= end) {
        if(v[st] == v[end]) {
            st++, end--;
        }
        else {
            vector<int> x, rev_x;
            for(int i=0; i<n; i++) {
                if(v[i] != v[st]) x.push_back(v[i]);
            }

            rev_x = x;
            reverse(x.begin(), x.end());

            if(rev_x == x) {
                cout << "YES\n";
                return;
            }

            vector<int> y, rev_y;
            for(int i=0; i<n; i++) {
                if(v[i] != v[end]) y.push_back(v[i]);
            }

            rev_y = y;
            reverse(y.begin(), y.end());

            if(rev_y == y) {
                cout << "YES\n";
                return;
            }

            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}