#include <bits/stdc++.h>
#include <iomanip>
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
    f(i,0,n) cin >> v[i];

    vec pref(n+1), suff(n);

    f(i,1,n) {
        pref[i+1] = pref[i] + abs(v[i]);
    }

    for(int i=n-1; i>=1; i--) {
        suff[i-1] = (suff[i] - v[i]);
    }

    ll ans = suff[0];

    f(i,1,n) {
        ll val = v[0];
        
        val += pref[i];
        val += suff[i];

        ans = max(ans,val);
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