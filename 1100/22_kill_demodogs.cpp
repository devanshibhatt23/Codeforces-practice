#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll k = 1e9 + 7;

void solve() {
    ll n;
    cin >> n;

    ll ans = 0;
    ans += ((n)*(n-1)) / 2;
    ans %= k;
    ans += (n*(n+1)*(2*n+1)) / 6;
    ans %= k;
    ans += (n*(n-1)*(2*n-1)) / 6;
    ans %= k;

    cout << (2022*ans) % k << "\n";
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}