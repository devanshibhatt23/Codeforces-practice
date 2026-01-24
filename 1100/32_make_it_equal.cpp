#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define vec vector<int> 
#define ci cin >> v[i];
#define so(v) sort(v.begin(), v.end())
using namespace std;

void solve() {
    int n,k;
    cin >> n >> k;

    vec s(n), t(n);
    f(i,0,n) {
        cin >> s[i];
        s[i] = min(s[i]%k, k-s[i]%k);
    }
    f(i,0,n) {
        cin >> t[i];
        t[i] = min(t[i]%k, k-t[i]%k);
    }

    so(s);
    so(t);
    if(s == t) cout << "YES\n";
    else cout << "NO\n";
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}