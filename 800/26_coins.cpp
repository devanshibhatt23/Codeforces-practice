#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;

    if(n%2==0) {
        cout << "YES\n";
        return;
    }
    else{
        if(k%2==0) {
            cout << "NO\n";
            return;
        }
        else {
            cout << "YES\n";
            return;
        }
    }
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}