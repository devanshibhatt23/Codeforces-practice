#include <bits/stdc++.h>
#include <queue>
#include <unordered_set>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define nn cout << "\n"
#define vec vector<ll> 
#define ci cin >> v[i]
#define s(v) sort(v.begin(), v.end())
#include <map>
using namespace std;

int bfs(ll n, ll k) {
    unordered_set<ll> st;
    if(n == k) return 0;
    if(n < k) return -1;

    queue<pair<ll,int>> q;
    q.push({n,0});

    while(!q.empty()) {
        auto [val,depth] = q.front();
        q.pop();

        if(val == 0) continue;

        if(val % 2) {
            ll low = val/2, high = low+1;

            if(low == k || high == k) return depth+1;

            if(low > k && !st.count(low)) {
                q.push({low,depth+1});
                st.insert(low);
            }
            if(high > k && !st.count(high)) {
                q.push({high,depth+1});
                st.insert(high);
            }
        }
        else {
            ll low = val/2;

            if(low == k) return depth+1;

            if(low > k && !st.count(low)) {
                q.push({low,depth+1});
                st.insert(low);
            }
        }
    }

    return -1;
}

void solve() {
    ll n,k;
    cin >> n >> k;

    cout << bfs(n,k);
    nn;
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}