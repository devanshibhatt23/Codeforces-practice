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
    int n;
    cin >> n;

    string s;
    cin >> s;

    int n1 = 0, n0 = 0;
    f(i,0,n) {
        if(s[i] == '0') n0++;
        else n1++;
    }

    if(abs(n1-n0) > 2) {
        cout << "-1\n";
        re;
    }

    string x;
    x.push_back(s[0]);

    f(i,1,n) {
        if(s[i] != s[i-1]) x.push_back(s[i]);
    }

    int l = x.size();
    int zero = 0, one = 0;

    f(i,0,l) {
        if(x[i] == '0') zero++;
        else one++;
    }

    int k = zero-one;
    int diff_n = n0-n1;

    int ans = n-l + max(0, abs(k-diff_n)-1);
    en;
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}