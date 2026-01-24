#include <bits/stdc++.h>
#include <numeric>
#define ll long long
using namespace std;

ll gcd(ll a, ll b) {
    if(b == 0) return a;
    else return gcd(b, a%b);
}

void solve() {
    int n;
    cin >> n;

    vector<ll> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    
    ll ans = 0;

    for(int i=0; i<n/2; i++) {
        ll diff = abs(v[i] - v[n-i-1]);
        if(ans == 0 && diff == 0) ans = 0;
        else if(ans == 0) ans = diff;
        else ans = gcd(ans, diff);
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