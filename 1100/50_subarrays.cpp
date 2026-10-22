#include <bits/stdc++.h>
#include <stack>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define r(i,e,s) for(int i=e; i>=s; i--)
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
    int n,k;
    cin >> n >> k;

    vec v(n), pref(n+1,0);
    f(i,0,n) cin >> v[i];

    f(i,1,n+1) {
        pref[i] = pref[i-1] + v[i-1];
        pref[i] %= k;
    }

    ll ans = 0;

    unordered_map<ll,ll> mp;
    f(i,k+1,n+1) {
        mp[pref[i-k-1]]++;
        ans += mp[pref[i]];
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