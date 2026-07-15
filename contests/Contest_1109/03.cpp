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

ll hcf(ll x, ll y) {
    if(y == 0) return x;
    return hcf(y, x%y);
}

void solve() {
    ll n,x,y;
    cin >> n >> x >> y;

    vec v(n);
    f(i,0,n) ci;

    ll gcd_ = hcf(x,y);

    f(i,1,gcd_+1) {
        vec a, b;

        for(int j=i-1; j<n; j+=gcd_) {
            a.push_back(j+1);
            b.push_back(v[j]);
        }

        s(b);

        if(a == b) continue;
        else {
            no;
            re;
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