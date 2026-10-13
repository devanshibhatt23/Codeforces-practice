#include <bits/stdc++.h>
#include <string>
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
    int n,k;
    cin >> n >> k;

    ll x = n-k+1, total = 0, ct = 1;

    while(x>0 && x--) {
        ct *= 2;
    }

    if(ct != 1) total += ct;
    total += (2*(k-1));
    cout << total;
    nn;
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}