#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define vec vector<int> 
#define ci cin >> v[i];
#define s(v) sort(v.begin(), v.end())
using namespace std;

void solve() {
    int n,m;
    cin >> n >> m;

    vector<vector<int>> v(n, vector<int> (m));
    ll ans = 0;

    f(i,0,n) {
        f(j,0,m) {
            cin >> v[i][j];
        }
    }

    f(j,0,m) {
        
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