#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a, ll b) {
    if(b==0) return a;
    else return gcd(b, a%b);
}

void solve() {
    int n;
    cin >> n;

    vector<ll> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    ll gcd_even = v[0], gcd_odd = v[1];

    for(int i=2; i<n; i++) {
        if(i%2 == 1) gcd_odd = gcd(gcd_odd, v[i]);
        else gcd_even = gcd(gcd_even, v[i]); 
    }

    bool b = 1;
    for(int i=1; i<n; i+=2) {
        if(v[i]%gcd_even == 0) {
            b = 0;
            break;
        }
    }

    if(b) {
        cout << gcd_even << "\n";
        return;
    }

    b = 1;
    for(int i=0; i<n; i+=2) {
        if(v[i]%gcd_odd == 0) {
            b = 0;
            break;
        }
    }

    if(b) {
        cout << gcd_odd << "\n";
        return;
    }

    cout << "0\n";
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}