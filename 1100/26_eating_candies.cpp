#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n;
    cin >> n;

    vector<ll> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    vector<ll> pref(n);
    pref[0] = v[0];

    for(int i=1; i<n; i++) pref[i] = pref[i-1] + v[i];

    int st = 0, end = n-1;
    ll ans = 0;

    while(st < end) {
        int x = pref[st];
        int y = pref[n-1] - pref[end-1];

        if(x == y) {
            ans = st + 1 + n - end;
            st++, end--;
        } 
        else if(x < y) {
            st++;
        }
        else end--;
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