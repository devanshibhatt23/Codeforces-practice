#include <bits/stdc++.h>
#include <queue>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define nn cout << "\n"
#define vec vector<ll> 
#define ci cin >> v[i];
#define s(v) sort(v.begin(), v.end())
#define yes cout << "YES"
#define no cout << "NO"
#define re return;
using namespace std;

void solve() {
    int n;
    cin >> n;

    vec v(n);
    f(i,0,n) cin >> v[i];

    ll sum = 0, even = 0, odd = 0;

    f(i,0,n) {
        sum += v[i];
        if(v[i] % 2) odd++;
        else even++;
    }

    if((odd == 1 && even == 1) || (odd == 3 && even == 0)) {
        cout << "Larpity\n";
        re;
    }

    cout << "Moggity\n";
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}