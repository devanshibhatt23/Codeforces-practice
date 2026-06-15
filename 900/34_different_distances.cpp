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

    vector<vec> v;

    if(n % 2 == 0) {
        for(int i=1; i<=n; i+=2) {
            v.push_back({i,i+1,i,i,i+1,i+1,i,i+1});
        }
    }
    else {
        v.push_back({1,1,2,1,2,3,1,3,2,2,3,3});

        for(int i=4; i<=n; i+=2) {
            v.push_back({i,i+1,i,i,i+1,i+1,i,i+1});
        }
    }

    for(auto k : v) {
        for(int i : k) cout << i << " ";
    }
    nn;
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}