#include <bits/stdc++.h>
#include <limits>
using namespace std;

void solve() {
    int n, m, st, end;
    cin >> n >> m >> st >> end;

    vector<pair<long long,long long>> v(n);

    for(int i=0; i<n; i++) {
        cin >> v[i].first >> v[i].second;
    }

    long long cost = LLONG_MAX;

    if(st <= m && end <= m) {
        cost = 0;
    }

    else if(st <= m && end > m) {
        st--, m--, end--;

        for(int i=0; i<=m; i++) {
            long long c = abs(v[i].first - v[end].first) + abs(v[i].second - v[end].second);
            cost = min(cost, c);
        }
    }

    else if(st > m && end <= m) {
        st--, m--, end--;

        for(int i=0; i<=m; i++) {
            long long c = abs(v[i].first - v[st].first) + abs(v[i].second - v[st].second);
            cost = min(cost, c);
        }
    }

    else {
        st--, m--, end--;
        if(m < 0) {
            cost = abs(v[end].first - v[st].first) + abs(v[end].second - v[st].second);
        }
        else {
            long long c = LLONG_MAX, d = LLONG_MAX;;
            for(int i=0; i<=m; i++) {
                long long p = abs(v[i].first - v[st].first) + abs(v[i].second - v[st].second);
                c = min(c,p);
                
                long long q = abs(v[i].first - v[end].first) + abs(v[i].second - v[end].second);
                d = min(q,d);
                // cout << p << " " << q << endl;

                // cout << c << " " << d << endl;
            }
            long long k = abs(v[end].first - v[st].first) + abs(v[end].second - v[st].second);
            cost = min(cost, c+d);
            cost = min(k, cost);
        }
    }

    cout << cost << endl;
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}