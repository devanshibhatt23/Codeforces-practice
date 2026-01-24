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
    ll n, q;
    cin >> n >> q;

    vector<pair<int,int>> v(n);

    ll sum = 0;
    f(i,0,n) {
        int x;
        cin >> x;
        v[i].first = x;
        sum += x;
        v[i].second = 0;
    }

    pair<int,int> global = {0,-1};
    ll ans = 0;

    for(int k=1; k<=q; k++) {
        int t;
        cin >> t;

        if(t == 1) {
            int i, x;
            cin >> i >> x;

            if(v[i-1].second < global.second) v[i-1].first = global.first;
            sum = sum + x - v[i-1].first;
            ans = sum;
            v[i-1].first = x;
            v[i-1].second = k;
            en;
        }
        else {
            ll x;
            cin >> x;
            sum = n*x;
            ans = sum;
            global.first = x;
            global.second = k;
            en;
        }
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}