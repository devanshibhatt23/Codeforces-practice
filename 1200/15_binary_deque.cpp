#include <bits/stdc++.h>
#include <vector>
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
    int n, k;
    cin >> n >> k;

    vec v(n);
    f(i,0,n) ci;

    map<int,int> m;
    m[0] = -1;
    int ans = -1, sum = 0;

    f(i,0,n) {
        sum += v[i];
        if(m.count(sum-k)) {
            ans = max(ans, i-m[sum-k]);
        }
        if(m.count(sum) == 0) m[sum] = i;
    }
    
    if(ans == -1) en;
    else {
        ans = n - ans;
        en;
    }
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}