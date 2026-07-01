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

void solve() {
    int n;
    cin >> n;

    vec a(n), b(n);
    f(i,0,n) cin >> a[i];
    f(i,0,n) cin >> b[i];

    ll diff = 0;

    f(i,0,n) {
        diff += (b[i] - a[i]);

        if(diff < 0) {
            no; re;
        }
    }
    
    yes;
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}