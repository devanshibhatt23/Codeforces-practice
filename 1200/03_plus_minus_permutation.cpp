#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
using namespace std;

ll gcd(ll a, ll b) {
    if(b==0) return a;
    else return gcd(b,a%b);
}

void solve() {
    ll n,x,y;
    cin >> n >> x >> y;

    ll k = (x*1LL*y) / gcd(x,y);

    ll end = n/x - n/k;
    ll st = n/y - n/k;

    ll ans = 0;
    // cout << end << " " << st << "\n";

    ans += ((n*end) - ((end-1)*(end)) / 2);
    ans -= ((st*(st+1)) / 2);

    en;
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}