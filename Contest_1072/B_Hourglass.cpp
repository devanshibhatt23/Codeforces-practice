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
    int s, k ,m;
    cin >> s >> k >> m;

    if(s > k) {
        if(m%(2*k) == k) cout << k << "\n";
        else if(m%(2*k) < k) cout << s - m%k << "\n";
        else cout << k - m%k << "\n";
    }

    else {
        m %= k;
        if(m < s) cout << s - m << "\n";
        else cout << "0\n";
    }
}
 
int main() {
    int t = 1;
    cin >> t;

    while(t--) {
        solve();
    }
}