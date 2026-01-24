#include <bits/stdc++.h>
#include <vector>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define vec vector<ll> 
#define ci cin >> v[i]
#define fi first
#define sec second
#define s(v) sort(v.begin(), v.end())
#define r(v) reverse(v.begin(), v.end())
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<vector<char>> v(n, vector<char> (n));

    f(i,0,n) {
        f(j,0,n) {
            cin >> v[i][j];
        }
    }

    ll ans = 0;
    f(i,0,n) {
        f(j,0,n) {
            int ct0 = 0, ct1 = 0;

            if(v[i][j] == '0') ct0++;
            else ct1++;

            if(v[n-1-j][i] == '0') ct0++;
            else ct1++;

            if(v[j][n-1-i] == '0') ct0++;
            else ct1++;

            if(v[n-1-i][n-1-j] == '0') ct0++;
            else ct1++;

            if(ct0==0 || ct1==0) continue;
            if(ct0 <= ct1) {
                ans += ct0;
                v[i][j] = '1';
                v[n-1-j][i] = '1';
                v[j][n-1-i] = '1';
                v[n-1-i][n-1-j] = '1';
            }
            else {
                ans += ct1;
                v[i][j] = '0';
                v[n-1-j][i] = '0';
                v[j][n-1-i] = '0';
                v[n-1-i][n-1-j] = '0';
            }
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