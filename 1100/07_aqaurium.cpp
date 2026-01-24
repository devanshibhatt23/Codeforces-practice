#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long x;
    cin >> n >> x;

    vector<long long> v(n);

    for(int i=0; i<n; i++) cin >> v[i];

    long long st = 1, end = 1e12;
    int ans = 0;

    while(st <= end) {
        long long mid = (st + end) / 2;

        long long sum = 0;
        for(int i=0; i<n; i++) {
            if(mid - v[i] > 0) sum += (mid-v[i]);
        }

        if(sum <= x) {
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