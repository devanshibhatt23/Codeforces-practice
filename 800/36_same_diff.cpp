#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int ans = 0;

    char ch = s[n-1];
    for(int i=0; i<n-1; i++) {
        if(s[i] != ch) ans++;
    }

    cout << ans << "\n";
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}