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
    int n;
    cin >> n;

    vec v(n);
    f(i,0,n) ci;

    ll sum = v[0];
    vec ans(n);
    ans[0] = v[0];
   
    f(i,1,n) {
        sum += v[i];

        ans[i] = min(ans[i-1], sum/(i+1));
    }

    f(i,0,n) cout << ans[i] << " ";
    nn;
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}