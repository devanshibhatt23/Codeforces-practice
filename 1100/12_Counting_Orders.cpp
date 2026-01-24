#include<bits/stdc++.h>
#define ll long long
#define PI 3.14
using namespace std;

void solve() {
    const int MOD = 1000000007;
    cout << PI << "\n";
    int n;
    cin >> n;

    vector<ll> a(n), b(n);
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int end = n-1, pt = n-1;
    ll ans = 1;
    int ct = 0;
    int prev = 0;

    bool f = 0;

    while(end>=0) {
        if(a[pt] > b[end] && !f) {
            ct++;
            pt--;
            if(pt==-1) {
                pt = 0;
                f = 1;
            }
        }
        else {
            ans = (ans * ((ct - prev) % MOD) % MOD);
            ans = ans % MOD;
            // ct = 0;
            prev++;
            end--;
            // pt = n-1;
        }
    }

    cout << (int)ans << "\n";
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}