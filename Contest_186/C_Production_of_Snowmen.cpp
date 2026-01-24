#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define vec vector<ll> 
#define ci cin >> v[i];
#define s(v) sort(v.begin(), v.end())
using namespace std;

void solve() {
    int n;
    cin >> n;

    vec a(n), b(n), c(n);
    f(i,0,n) cin >> a[i];
    f(i,0,n) cin >> b[i];
    f(i,0,n) cin >> c[i];

    ll ans1 = 0, ans2 = 0;
    
    f(j,0,n) {
        int i = 0, q = j;
        if(a[i] < b[j]) {
            bool p = 1;
            f(k,0,n) {
                if(a[(i+1) % n] >= b[(j+1) % n]) {
                    p = 0;
                    break;
                }
                i++, j++;
            }
            if(p) ans1++;
        }

        j = q, i = 0;
    }

    f(j,0,n) {
        int i = 0, q = j;
        if(b[i] < c[j]) {
            bool p = 1;
            f(k,0,n) {
                if(b[(i+1) % n] >= c[(j+1) % n]) {
                    p = 0;
                    break;
                }
                i++, j++;
            }
            if(p) ans2++;
        }

        j = q, i = 0;
    }

    // cout << ans1 << " " <<ans2  << "\n";

    cout << ans1*ans2*1LL*n << "\n";
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