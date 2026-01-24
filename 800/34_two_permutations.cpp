#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,a,b;
    cin >> n >> a >> b;

    if(n==1) {
        cout << "Yes\n";
    }
    else if(a+b < n-1) {
        cout << "Yes\n";
    }
    else if(a==n & b==n) cout << "Yes\n";
    else cout << "No\n";
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}