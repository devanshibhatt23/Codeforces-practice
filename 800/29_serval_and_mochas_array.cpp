#include <bits/stdc++.h>
#include <map>
using namespace std;

int gcd(int a, int b) {
    if(b%a == 0) return a;
    return gcd(b%a, a);
}

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    int hcf = v[0];
    for(int i=0; i<n; i++) {
        hcf = gcd(v[i], hcf);
    } 

    if(hcf > n) {
        cout << "NO\n";
        return;
    }
    else {
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(i!=j) {
                    if(gcd(v[i], v[j]) <= 2) {
                        cout << "YES\n";
                        return;
                    }
                }
            }
        }
        cout << "NO\n";
        return;
    }
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}