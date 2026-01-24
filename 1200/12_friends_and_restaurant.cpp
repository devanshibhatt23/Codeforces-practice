#include <bits/stdc++.h>
#include <vector>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define vec vector<ll> 
#define ci cin >> v[i];
#define fi first
#define sec second;
#define s(v) sort(v.begin(), v.end())
using namespace std;

void solve() {
    int n;
    cin >> n;

    vec x(n), y(n);
    f(i,0,n) cin >> x[i];
    f(i,0,n) cin >> y[i];

    ll ans = 0;
    multiset<int> s;

    f(i,0,n) {
        s.insert(y[i] - x[i]);
    }

    while(s.size() > 1) {
        int temp = *s.begin();
        s.erase(s.begin());

        if(s.lower_bound(-1*temp) == s.end()) continue;
        else {
            ans++;
            s.erase(s.lower_bound(-1*temp));
        }
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