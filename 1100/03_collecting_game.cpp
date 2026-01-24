#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    long long a;
    vector<pair<long long,long long>> v;

    for(long long i=0; i<n; i++) {
        cin >> a;
        v.push_back({a,i});
    }

    sort(v.begin(), v.end());

    vector<long long> pref(n);
    pref[0] = v[0].first;

    for(long long i=1; i<n; i++) {
        pref[i] = pref[i-1] + v[i].first;
    }

    vector<long long> ans(n);

    for(long long i=0; i<n; i++) {
        long long ct = i, j = i;

        while(j < n) {
            pair<long long,long long> temp = {pref[j]+1, INT_MIN};
            auto idx = lower_bound(v.begin(), v.end(), temp) - v.begin();
            idx--;

            if(idx == j) break;
            ct += (idx - j);
            j = idx;
        }

        ans[v[i].second] = ct;
    }

    for(long long i : ans) cout << i << " ";
    cout << endl;
}

int main() {
    int t=1;
    cin >> t;

    while(t--) {
        solve();
    }
}