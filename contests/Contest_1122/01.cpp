#include <bits/stdc++.h>
#include <string>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define nn cout << "\n"
#define vec vector<ll> 
#define ci cin >> v[i];
#define s(v) sort(v.begin(), v.end())
#define yes cout << "YES"
#define no cout << "NO"
#define re return;
using namespace std;

void solve() {
    int n;
    cin >> n;

    vec v(3);
    f(i,0,3) cin >> v[i];

    ll ans = INT_MAX;
    f(i,0,3) {
        if(v[i] < n) ans = min(ans,v[i]);
    }
    
    if(ans == INT_MAX) cout << "0\n";
    else cout << n-ans << "\n";
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}