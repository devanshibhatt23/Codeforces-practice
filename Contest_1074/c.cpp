#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<ll> v(n);
    f(i,0,n) cin >> v[i];

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    ll mex = 0;
    ll shift = 0;
    bool used = false;

    for (ll x : v) {
        if (!used) {
            shift = mex - x;
            used = true;
        }

        ll val = x + shift;

        if (val == mex) {
            mex++;
        } else if (val < mex) {
            continue;
        } else {
            break;
        }
    }

    cout << mex << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
}
