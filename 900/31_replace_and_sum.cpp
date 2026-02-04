#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define vec vector<ll> 
#define ci cin >> v[i]
#define s(v) sort(v.begin(), v.end())
using namespace std;

void solve() {
    int n,q;
    cin >> n >> q;

    vec a(n), b(n);
    f(i,0,n) cin >> a[i];
    f(i,0,n) cin >> b[i];

    for(int i=n-1; i>=0; i--) {
        a[i] = max(a[i], b[i]);
        if(i != n-1) a[i] = max(a[i],a[i+1]);
    }

    vec pref(n);
    pref[0] = a[0];
    f(i,1,n) pref[i] = pref[i-1] + a[i];

    while(q--) {
        int l,r;
        cin >> l >> r;
        l--, r--;

        int ans;
        if(l == 0) ans = pref[r];
        else ans = pref[r] - pref[l-1];

        cout << ans << " ";   
    }
    cout << "\n";
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}