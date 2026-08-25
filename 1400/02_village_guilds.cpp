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

ll dfs(int i, ll &ans, vector<vec> &adj_list) {
    ll max1 = 0, max2 = 0;

    for(int child : adj_list[i]) {
        ll depth = 1 + dfs(child,ans,adj_list);

        if(depth > max1) {
            max2 = max1;
            max1 = depth;
        }
        else if(depth > max2) {
            max2 = depth;
        }
    }

    ans += max2;

    return max1;
}

void solve() {
    int n;
    cin >> n;

    vector<vec> adj_list(n+1);

    f(i,2,n+1) {
        int x;
        cin >> x;

        adj_list[x].push_back(i);
    }

    ll ans = n;
    dfs(1,ans,adj_list);

    en;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}