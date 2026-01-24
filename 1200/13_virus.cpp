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
#define r(v) reverse(v.begin(), v.end())
using namespace std;

void solve() {
    int n,m;
    cin >> n >> m;

    vec v(m);
    f(i,0,m) ci;

    s(v);
    vec diff;

    f(i,0,m-1) {
        diff.push_back(v[i+1]-v[i]-1);
    }
    diff.push_back(n-v[m-1]+v[0]-1);

    s(diff);
    r(diff);

    int saved = 0, days = 0;

    f(i,0,m) {
        int curr_diff = diff[i] - 2*days;
        if(curr_diff > 0) {
            saved++;

            curr_diff -= 2;
            if(curr_diff > 0) saved += curr_diff;

            days += 2;
        }
    }
    cout << n - saved << "\n";
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}