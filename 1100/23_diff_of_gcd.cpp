#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll k = 1e9 + 7;

void solve() {
    int n,l,r;
    cin >> n >> l >> r;

    vector<ll> v;

    for(int i=1; i<=n; i++) {
        int ans;
        if(l%i == 0) ans = l;
        else ans = (l/i + 1) * i;

        if(ans > r) {
            cout << "NO\n";
            return; 
        }
        v.push_back(ans);
    }
    
    cout << "YES\n";
    for(int i : v) cout << i << " ";
    cout << "\n";
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}