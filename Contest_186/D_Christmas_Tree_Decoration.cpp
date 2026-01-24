#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(ll i=s; i<e; i++)
#define en cout << ans << "\n"
#define vec vector<ll> 
#define ci cin >> v[i];
#define s(v) sort(v.begin(), v.end())
using namespace std;

const ll cons = 998244353;

void solve() {
    ll n;
    cin >> n;

    vec v(n+1);
    ll s = 0;
    f(i,0,n+1) {
        ci;
        s += v[i];
    }

    ll val = s/n;
    ll rem = s % n;

    vec a(n+1);
    f(i,0,n) {
        a[i+1] = val;
    }

    int i = 0;
    while(rem--) {
        a[i+1]++;
        if(i == n) i = 0;
        else i++;
    }

    int ct = 0;
    ll ans = 1;
    sort(v.begin()+1, v.end());

    for(int i=n; i>0; i--) {
        ll k = 0;
        ll x = a[i];

        f(j,1,n+1) {
            if(v[j] <= x) k++;
            else break;
        }
        ans *= (k-ct);
        ans %= cons;
        ct++;
    }

    ans %= cons;
    en;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}