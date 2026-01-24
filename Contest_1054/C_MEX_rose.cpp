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
    int n, k;
    cin >> n >> k;

    vec v(n);

    f(i,0,n) ci

    s(v);

    int l = 0;
    f(i,0,n) {
        if(v[i] != l) {
            break;
        }
        l++;
    }

    unordered_map<int,int> m;
    f(i,0,n) m[v[i]]++;

    if(l == k) cout << "0\n";
    else if(l > k) cout << m[k] << "\n";
    else {
        int ans = 0, rest = 0;
        f(i,0,k) {
            if(m.find(i) != m.end()) rest += (m[i] - 1);
        }
        f(i,l,k) {
            if(m.find(i) == m.end()) {
                ans++;
            } 
        }
        if(ans > rest) ans -= rest;
        
        if(m.count(k)) {
            if(ans <= m[k]) cout << m[k] << "\n";
            else en;
        }
        else en;
    }
}
 
int main() {
    int t = 1;
    cin >> t;

    while(t--) {
        solve();
    }
}