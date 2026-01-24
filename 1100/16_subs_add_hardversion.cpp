#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    if(v[0] != 1) {
        cout << "NO\n";
        return;
    }

    ll sum = 0;
    for(int i=0; i<n-1; i++) {
        sum += v[i];
        if(v[i+1] > sum) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}