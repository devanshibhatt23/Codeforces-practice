#include <bits/stdc++.h>
#define ll long long 
using namespace std;

void solve() {
    ll n,c;
    cin >> n >> c;

    vector<ll> v(n);

    for(int i=0; i<n; i++) cin >> v[i];

    ll st = 1, end = 1e9, ans = 0;

    while(st <= end) {
        ll mid = (st + end) / 2;
        ll sum = 0;

        for(int i=0; i<n; i++) {
            ll q = (v[i] + 2*mid) * (v[i] + 2*mid);
            sum += q;
            if(sum > c) {
                ans = mid-1;
                break;
            }
        }

        if(sum <= c) {
            ans = mid;
            st = mid + 1;
        }
        else {
            end = mid - 1;
        }
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