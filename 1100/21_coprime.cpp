#include <bits/stdc++.h>
#define ll long long
using namespace std;

int gcd(int a, int b) {
    if(b==0) return a;
    else return gcd(b, a%b);
}

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    map<int,int> m;

    for(int i=0; i<n; i++) {
        cin >> v[i];
        m[v[i]] = i+1;
    }

    int ans = -1;

    for(auto i : m) {
        for(auto j : m) {
            if(gcd(i.first, j.first) == 1) {
                ans = max(ans, i.second + j.second);
            }
        }
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