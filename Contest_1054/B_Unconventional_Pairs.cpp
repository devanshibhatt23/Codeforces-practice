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
    int n;
    cin >> n;

    vec v(n);

    f(i,0,n) ci

    s(v);

    int diff = INT_MIN;
    for(int i=0; i<n; i+=2) {
        diff = max(diff, abs(v[i+1] - v[i]));
    }

    cout << diff;
    enn;
}
 
int main() {
    int t = 1;
    cin >> t;

    while(t--) {
        solve();
    }
}