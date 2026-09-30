#include <bits/stdc++.h>
#include <string>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define nn cout << "\n"
#define vec vector<ll> 
#define ci cin >> v[i];
#define s(v) sort(v.begin(), v.end())
#define yes cout << "YES"
#define no cout << "NO"
#define re return;
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int zero = 0, one = 0;

    f(i,0,n) {
        if(s[i] == '0') zero++;
        else one++;
    }

    if(is_sorted(s.begin(),s.end())) {
        cout << "0\n";
        re;
    }

    vec pref(n+1,0), suff(n+1,0);

    pref[0] = 0;
    suff[n] = 0;
    
    f(i,1,n+1) {
        pref[i] = pref[i-1];
        if(s[i-1] == '1') pref[i]++;
    }

    for(int i=n-1; i>=0; i--) {
        suff[i] = suff[i+1];
        if(s[i] == '0') suff[i]++;
    }

    ll ans = INT_MAX;

    // f(i,0,n+1) cout << pref[i] << " ";
    // nn;

    // f(i,0,n+1) cout << suff[i] << " ";
    // nn;

    f(i,0,n+1) {
        ans = min(ans, pref[i]+suff[i]);
    }

    if(s[0] == '1') {
        ans = zero;
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