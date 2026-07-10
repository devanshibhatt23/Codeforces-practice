#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define nn cout << "\n"
#define vec vector<ll> 
#define ci cin >> v[i];
#define s(v) sort(v.begin(), v.end())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define re return;
using namespace std;

void solve() {
    int n;
    cin >> n;

    vec v(n);
    f(i,0,n) ci;

    s(v);
    int ct = 0;
    ll x = 0;

    f(i,0,n) {
        if(v[i] > 0) ct++;
        x ^= v[i];
    }

    ll ans = 0;

    if(ct <= 1) {
        en;
        re;
    }

    if(x == 0) {
        ans = 1;
        en;
        re;
    }

    f(i,0,n) {
        if(v[i] > 0) {
            ll xor_ = x ^ v[i];

            if(xor_ <= v[i]) ans++;
        }
    }

    en;
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}