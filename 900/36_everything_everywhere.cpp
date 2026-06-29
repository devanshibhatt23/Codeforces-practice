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

int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a%b);
}

void solve() {
    int n;
    cin >> n;

    vec v(n);
    f(i,0,n) ci;

    int ans = 0;

    f(i,1,n) {
        int x = v[i-1], y = v[i];
        if(max(x,y) - min(x,y) == gcd(x,y)) ans++;
    }

    en;
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}