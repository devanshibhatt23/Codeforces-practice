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

    vec a(n), b(n);
    f(i,0,n) cin >> a[i];
    f(i,0,n) cin >> b[i];

    if(a == b) {
        cout << "0\n";
        re;
    }

    int x10 = 0, x01 = 0, x00 = 0, x11 = 0;

    f(i,0,n) {
        if(a[i] == 1 && b[i] == 0) x10++;
        if(a[i] == 0 && b[i] == 1) x01++;
        if(a[i] == 0 && b[i] == 0) x00++;
        if(a[i] == 1 && b[i] == 1) x11++;
    }

    if(x10 % 2 == 1) {
        cout << "1\n";
        re;
    }

    if(x10 == 0 && x01 > 0) {
        if(x00 > 0 && x11 > 0) cout << "2\n";
        else cout << "-1\n";
        re;
    }

    cout << "2\n";
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}