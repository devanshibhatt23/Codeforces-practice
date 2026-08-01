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

ll gcd(ll a, ll b) {
    if(b == 0) return a;
    return gcd(b,a%b);
}

void solve() {
    int n,m,a,b;
    cin >> n >> m >> a >> b;

    if(gcd(n,a) == 1 && gcd(m,b) == 1 && gcd(n,m) <= 2) {
        yes;
        re;
    }

    no;
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}