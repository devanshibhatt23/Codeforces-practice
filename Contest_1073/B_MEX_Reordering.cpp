#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define vec vector<int> 
#define ci cin >> v[i];
#define s(v) sort(v.begin(), v.end())
using namespace std;

void solve() {
    int n;
    cin >> n;

    vec v(n);
    int zero_ct = 0;

    f(i,0,n) {
        ci
        if(v[i] == 0) zero_ct++;
    }

    if(zero_ct == 0) cout << "NO\n";
    else {
        f(i,0,n) {
            if(v[i] == 1) {
                cout << "YES\n";
                return;
            }
        }
        
        if(zero_ct == 1) cout << "YES\n";
        else cout << "NO\n";
    }
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}