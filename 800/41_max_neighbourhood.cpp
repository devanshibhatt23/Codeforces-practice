#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define vec vector<int> 
#define ci cin >> v[i];
#define s(v) sort(v.begin(), v.end())
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<vector<ll>> v(n, vector<ll> (n));

    int k = 1;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            v[i][j] = k;
            k++;
        }
    }

    ll ans = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            ll val = v[i][j];
            if(i != 0) val += v[i-1][j];
            if(j != 0) val += v[i][j-1];
            if(i != n-1) val += v[i+1][j];
            if(j != n-1) val += v[i][j+1];
            
            ans = max(ans,val);
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