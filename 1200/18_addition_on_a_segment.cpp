#include <bits/stdc++.h>
#include <unordered_set>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define vec vector<ll> 
#define ci cin >> v[i]
#define fi first
#define sec second
#define s(v) sort(v.begin(), v.end())
#define r(v) reverse(v.begin(), v.end())
using namespace std;

void solve() {
    int n;
    cin >> n;

    vec v(n);
    f(i,0,n) ci;

    s(v);
    ll pos = 0;
    ll sum = 0;

    f(i,0,n) {
        if(v[i]) pos++;
        sum += v[i];
    }

    int ans;
    if(sum - pos >= n-1) ans = pos;
    else ans = min(pos, sum-n+1);

    en;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while(t--) {
        solve();
    }
}