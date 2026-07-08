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
    int n,x;
    cin >> n >> x;

    vec v(n);
    f(i,0,n) ci;

    s(v);

    int l = 0, r = n-1;
    vec a;
    ll total = 0, prev = 0, ans = 0;

    while(l <= r) {
        if((total + v[r]) / x > prev) {
            total += v[r];
            prev = total / x;
            ans += v[r];
            a.push_back(v[r]);
            r--;
        }
        else {
            total += v[l];
            a.push_back(v[l]);
            l++;
        }
    }

    en;
    f(i,0,n) cout << a[i] << " ";
    nn;
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}