#include <bits/stdc++.h>
#include <numeric>
using namespace std;

void solve() {
    int n; cin >> n;

    vector<long long> v(n);

    for(int i=0; i<n; i++) cin >> v[i];

    vector<long long> p = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53};

    for(long long j : p) {
        for(int i=0; i<n; i++) {
            if(v[i] % j != 0) {
                cout << j << endl;
                return;
            }
        }
    }

    cout << "-1\n";
} 

int main() {
    int t = 1;
    cin >> t;

    while(t--) {
        solve();
    }
}