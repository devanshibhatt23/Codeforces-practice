#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    vector<int> a;
    for(int i=0; i<n; i++) {
        if(v[i] != i) a.push_back(v[i]);
    }

    int ans = a[0] & a[1];
    for(int i=2; i<a.size(); i++) ans = ans & a[i];

    cout << ans << "\n";
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}