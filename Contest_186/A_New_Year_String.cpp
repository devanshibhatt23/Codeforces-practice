#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define vec vector<ll> 
#define ci cin >> v[i];
#define s(v) sort(v.begin(), v.end())
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;

    if(s.find("2026") != string::npos || s.find("2025") == string::npos) {
        cout << "0\n";
    }
    else cout << "1\n";
}
 
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}