#include <bits/stdc++.h>
#define ll long long 
using namespace std;

void solve() {
    ll n,k;
    cin >> n >> k;

    vector<ll> v(n), pref(n);
    
    for(int i=0; i<n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    pref[0] = v[0];
    for(int i=1; i<n; i++) pref[i] = pref[i-1] + v[i]; 

    ll ans = INT_MIN;

    for(int i=0; i<=k; i++) {
        ll x;
        if(i == k) x = pref[n-i-1];
        else x = pref[n-i-1] - pref[2*k - (2*i + 1)];
        ans = max(ans, x);
    }

    cout << ans << endl;
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}