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
    int n, x1, x2, k;
    cin >> n >> x1 >> x2 >> k;

    if(n<=3) {
        cout << 1;
        nn;
        return;
    }

    int diff = abs(x1-x2);
    diff = min(diff, abs(n-diff));

    int ans = diff+k;
    en;
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}