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

    map<int,int> m1, m2;

    vec v(n);
    f(i,0,n) {
        ci
        if(i % 2) m1[v[i]] = 1;
        else m1[v[i]] = 0;
    }

    f(i,0,n) {
        if(i % 2) m2[v[i]] = 0;
        else m2[v[i]] = 1;
    }

    s(v);
    bool b1 = 0, b2 = 0;
    f(i,1,n) {
        if(m1[v[i]] == m1[v[i-1]]) {
            b1 = 1;
        }
        if(m2[v[i]] == m2[v[i-1]]) {
            b2 = 1;
        }
    }

    if(b1 == 0 || b2 == 0) cout << "YES\n";
    else cout << "NO\n";
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}