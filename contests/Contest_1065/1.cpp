#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define enn cout << "\n"
#define vec vector<int> 
#define ci cin >> v[i];
#define fi first
#define sec second
#define s(v) sort(v.begin(), v.end())
using namespace std;

void solve() {
    int n;
    cin >> n;

    ll ans = 0;
    for(int i=0; i<=n/2; i++) {
        if((n-2*i) % 4 == 0) ans++;
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