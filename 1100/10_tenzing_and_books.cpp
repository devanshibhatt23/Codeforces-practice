#include <bits/stdc++.h>
#define ll long long 
using namespace std;

void solve() {
    ll n,x;
    cin >> n >> x;

    vector<ll> v1(n), v2(n), v3(n);

    for(int i=0; i<n; i++) cin >> v1[i];
    for(int i=0; i<n; i++) cin >> v2[i];
    for(int i=0; i<n; i++) cin >> v3[i];

    if(x == 0) cout << "YES\n";
    else if(x < v1[0] && x < v2[0] && x < v3[0]) cout << "NO\n";
    else if(x == v1[0] || x == v2[0] || x == v3[0]) cout << "YES\n";

    else {
        vector<ll> p1, p2, p3;
        p1.push_back(v1[0]);
        p2.push_back(v2[0]);
        p3.push_back(v3[0]);

        for(int i=1; i<n; i++) {
            ll a = p1[i-1];
            if(a | v1[i] != a) {
                a |= v1[i];
                p1.push_back(a);
            } 
        }
        for(int i=1; i<n; i++) {
            ll a = p2[i-1];
            if(a | v2[i] != a) {
                a |= v2[i];
                p2.push_back(a);
            } 
        }
        for(int i=1; i<n; i++) {
            ll a = p3[i-1];
            if(a | v3[i] != a) {
                a |= v3[i];
                p3.push_back(a);
            } 
        }

        for(int i=0; i<p1.size(); i++) {
            for(int j=0; j<p2.size(); j++) {
                for(int k=0; k<p3.size(); k++) {
                    if((p1[i] | p2[j] | p3[k]) == x) {
                        cout << "YES\n";
                        return;
                    }
                }
            }
        }

        cout << "NO\n";
    }
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}