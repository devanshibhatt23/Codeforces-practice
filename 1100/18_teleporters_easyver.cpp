#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
        v[i] += (i+1);
    }

    sort(v.begin(), v.end());

    int ct = 0;
    for(int i=0; i<n; i++) {
        if(k >= v[i]) {
            k -= v[i];
            ct++;
        }
        else break;
    }

    cout << ct << "\n";
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}