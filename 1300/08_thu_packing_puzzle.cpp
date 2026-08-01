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
    ll t,h,u;
    cin >> t >> h >> u;

    ll ans = 0;

    ll mini = min(t,u);
    ans += (mini*4);

    t -= mini;
    u -= mini;

    ll mini2 = min(h,t/2);

    h -= mini2;
    t -= (mini2*2);

    ans += (mini2*7);

    ll mini3 = min(t,h);
    ans += (mini3*5);

    t -= mini3;
    h -= mini3;

    ll k = t*2 + 1;
    if(k >= 3) ans += k;

    ans += ((u+h)*3);

    en;
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}