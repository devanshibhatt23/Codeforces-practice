#include <bits/stdc++.h>
#include <iomanip>
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
    int n;
    cin >> n;

    vector<double> c(n), p(n);
    f(i,0,n) {
        cin >> c[i] >> p[i];
        p[i] = (1.0 - p[i]/100.0);
    }

    vector<double> dp(n+1,0.0);
    
    for(int i=n-1; i>=0; i--) {
        double skip = dp[i+1];
        double take = c[i] + p[i] * dp[i+1];

        dp[i] = max(skip,take);
    }

    cout << fixed << setprecision(10) << dp[0];
    nn;
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}