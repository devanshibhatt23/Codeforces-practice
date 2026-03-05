#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define nn cout << "\n"
#define vec vector<ll> 
#define ci cin >> v[i]
#define s(v) sort(v.begin(), v.end())
#include <map>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vec a(n), b(n);
    f(i,0,n) cin >> a[i];
    f(i,0,n) cin >> b[i];

    s(a);

    ll ans = 0;
    int last = n-1;
    ll level = INT_MAX;

    f(i,0,n) {
        int val = b[i];

        if(last >= 0) {
            for(int j=last; val>0 && j>=0; j--) {
                if(j == 0 && val > (j+1)) {
                    en; 
                    return;
                }
                level = min(level, a[j]);
                val--;
            }
            ll x = level * (i+1);
            ans = max(x,ans);
            last -= b[i];
        }
        if(last < 0) break;
        // cout << ans << " " << last << "\n";
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