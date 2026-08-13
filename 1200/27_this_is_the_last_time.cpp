#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define nn cout << "\n"
#define vec vector<ll> 
#define ci cin >> v[i];
#define s(v) sort(v.begin(), v.end())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define re return;
using namespace std;

struct x {
    int l,r,w;
};

bool comp(x a, x b) {
    return a.l < b.l;
}

void solve() {
    int n, k;
    cin >> n >> k;

    vector<x> v(n);
    f(i,0,n) cin >> v[i].l >> v[i].r >> v[i].w;

    sort(v.begin(), v.end(), comp);

    f(i,0,n) {
        if(v[i].l <= k) {
            k = max(k, v[i].w);
        }
        else break;
    }

    cout << k << "\n";
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}