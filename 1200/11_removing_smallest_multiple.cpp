#include <bits/stdc++.h>
#include <vector>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define vec vector<int> 
#define ci cin >> v[i];
#define fi first
#define sec second;
#define s(v) sort(v.begin(), v.end())
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    ll ans = 0;
    vector<bool> isremoved(n+1, false);

    f(k,1,n+1) {
        for(int i=k; i<n+1; i+=k) {
            if(s[i-1] == '1') break;
            if(isremoved[i-1]) continue;
            else {
                ans += k;
                isremoved[i-1] = 1;
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