#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define enn cout << "\n"
#define vec vector<int> 
#define ci cin >> v[i];
#define fi first
#define sec second
#define s(v) sort(v.begin(), v.end())
using namespace std;

void solve() {
    int n;
    cin >> n;

    vec a(n), b(n);
    int xor_ = 0;

    f(i,0,n) {
        cin >> a[i];
        xor_ ^= a[i];
    }
    f(i,0,n) {
        cin >> b[i];
        xor_ ^= b[i];
    }
    
    if(xor_ == 0) cout << "Tie\n";
    else {
        ll highest_bit = 63 - __builtin_clzll(xor_);
        ll mask = (1LL << highest_bit);
        // cout << mask << "\n";

        for(int i=n-1; i>=0; i--) {
            if(((a[i] ^ b[i]) & mask) != 0) {
                if(i % 2 == 0) cout << "Ajisai\n";
                else cout << "Mai\n"; 
                return;
            }
        }
    }
}
 
int main() {
    int t = 1;
    cin >> t;

    while(t--) {
        solve();
    }
}