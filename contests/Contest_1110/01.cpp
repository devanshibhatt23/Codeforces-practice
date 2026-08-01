#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define nn cout << "\n"
#define vec vector<ll> 
#define ci cin >> v[i];
#define s(v) sort(v.begin(), v.end())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define re return;
using namespace std;

void solve() {
    int n,k;
    cin >> n >> k;

    string s;
    cin >> s;

    int ans = 0;

    if(k * 2 > n) {
        cout << "-1\n";
        re;
    }

    f(i,0,k) {
        if(s[i] == 'L') {
            s[i] = 'R';
            ans++;
        }
    }

    f(i,n-k,n) {
        if(s[i] == 'R') {
            s[i] = 'L';
            ans++;
        }
    }

    en;
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}