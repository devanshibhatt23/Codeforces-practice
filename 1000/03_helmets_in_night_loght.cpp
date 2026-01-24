#include <bits/stdc++.h>
#include <map>
#include <set>
using namespace std;

void devanshi() {
    int n, p;
    cin >> n >> p;

    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    vector<int> b(n);
    for(int i=0; i<n; i++) cin >> b[i];

    multimap<int, int> m;
    for(int i=0; i<n; i++) {
        m.insert({b[i], {a[i]}});
    }

    if(n==1) {
        cout << p << "\n";
        return;
    }

    // long long count = 0;
    // for(int i=0; i<n; i++) {
    //     if(b[i] == p) count++;
    // }
    // if(count == n) {
    //     cout << p*1LL*n << "\n";
    //     return;
    // }

    long long ans = 0;

    int k = n - 1;
    ans += p;

    for(auto it : m) {
        if(it.first <= p) {
            if(it.second <= k) {
                ans += (it.first * 1LL * it.second);
                k = k - it.second;
                if(k<=0) {
                    cout << ans << "\n";
                    return;
                }
            }
            else {
                ans += (it.first * 1LL * k);
                cout << ans << "\n";
                return;
            }
        }
        else {
            break;
        }
    }
    ans += (p * 1LL * k);
    cout << ans << "\n";
    return;
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        devanshi();
    }
}