#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define vec vector<int> 
#define ci cin >> v[i];
#define fi first
#define sec second
#define s(v) sort(v.begin(), v.end())
using namespace std;

void solve() {
    ll a,b;
    cin >> a >> b;

    if(a==b) {
        cout << 0 << "\n";
        return;
    }

    else {
        ll x = a^b;
        if(x <= a) {
            cout << 1 << "\n";
            cout << x << "\n";
            return;
        }

        ll ch = b;
        ll v = 0;

        while(ch > 0) {
            v++;
            ch >> 1;
        }

        v = (1LL << v) - 1;

        ll q = x^v;
        if(q <= (a^v) && v <= a) {
            cout << 2 << "\n";
            cout << v << " " << q << "\n";
        }
        else cout << "-1\n";
    }
}
 
int main() {
    int t = 1;
    cin >> t;

    while(t--) {
        solve();
    }
}