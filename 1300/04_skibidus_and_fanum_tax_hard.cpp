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
    int n,m;
    cin >> n >> m;

    vec a(n),b(m);
    f(i,0,n) cin >> a[i];
    f(i,0,m) cin >> b[i];

    s(b);

    ll x = INT_MAX;

    f(i,0,m) {
        x = min(x,b[i]-a[0]);
    }

    a[0] = min(a[0],x);

    f(i,1,n) {
        ll y = a[i];
        int l = 0, r = m-1;
        
        while(l < r) {
            int mid = (l+r)/2;

            if(b[mid] - a[i] >= a[i-1]) {
                r = mid;
            }
            else {
                l = mid + 1;
            }
        }

        a[i] = min(y,(b[l] - a[i]));

        if(a[i] < a[i-1]) {
            a[i] = max(y,(b[l] - a[i]));
        }
    }

    if(is_sorted(a.begin(), a.end())) yes;
    else no; 
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}