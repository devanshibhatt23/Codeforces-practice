#include <bits/stdc++.h>
#include <iomanip>
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
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<string> pat = {"0011", "0110", "1100", "1001"};

    int ans = 0;

    for(auto it : pat) {
        bool a = 1;

        f(i,0,n) {
            if(s[i] != '?' && s[i] != it[i%4]) {
                a = 0;
                break;
            }
        }

        if(a) ans++;
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