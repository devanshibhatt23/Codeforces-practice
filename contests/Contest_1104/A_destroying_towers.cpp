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

    vec v(n);
    f(i,0,n) ci;
   
    ll mini = INT_MAX;
    ll ans = 0;

    f(i,0,n) {
        mini = min(mini,v[i]);
        ans += mini;
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