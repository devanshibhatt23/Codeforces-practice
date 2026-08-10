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
    int n,c;
    cin >> n >> c;
    
    vec v(n);
    f(i,0,n) ci;

    s(v);

    int less = 0, greater = 0;
    f(i,0,n) {
        if(v[i] <= c) less++;
        else greater++;
    }

    ll ans = 0;
    if(less <= greater) {
        f(i,0,n) {
            if(v[i] > c) {
                ans += (v[i] - c);
            }
        }

        en;
        re;
    }

    f(i,n/2,n) {
        ans += (v[i] - c);
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