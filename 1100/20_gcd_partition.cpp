#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a, ll b) {
    if(b==0) return a;
    else return gcd(b, a%b);
}

void solve() {
    ll n;
    cin >> n;

    vector<ll> v(n), pref(n);

    for(int i=0; i<n; i++) cin >> v[i];

    pref[0] = v[0];
    for(int i=1; i<n; i++) {
        pref[i] = pref[i-1] + v[i];
    }

    ll ans = 0;

    for(int i=0; i<n-1; i++) {
        ans = max(ans, gcd(pref[n-1] - pref[i], pref[i]));
    }

    cout << ans << "\n";
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}