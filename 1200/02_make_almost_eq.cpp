#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en << "\n"
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<ll> v(n);
    f(i,0,n) cin >> v[i];

    f(i,1,61) {
        ll k = 1LL << i;
        set<ll> s;

        f(i,0,n) {
            s.insert(v[i] % k);
        }

        if(s.size() == 2) {
            cout << k en;
            return;
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