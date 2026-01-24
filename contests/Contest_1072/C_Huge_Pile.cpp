#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define enn cout << "\n"
#define vec vector<int> 
#define ci cin >> v[i];
#define fi first
#define sec second
#define s(v) sort(v.begin(), v.end())
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    int l = n, r = n;
    int ans = 0;

    while(r != 1){
        if(l <= k && k <= r) break;
        l /= 2;
        r = r/2 + r%2;
        ans++;
    }

    if(l <= k && k <= r) en;
    else cout << "-1\n";
}
 
int main() {
    int t = 1;
    cin >> t;

    while(t--) {
        solve();
    }
}