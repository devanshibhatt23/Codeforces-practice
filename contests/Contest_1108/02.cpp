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

    if(n == 1) {
        cout << "1\n";
        re;
    }

    if(n == 2) {
        cout << "-1\n";
        re;
    }

    ll ct = 3;
    cout << "1 2 ";

    f(i,3,n+1) {
        cout << ct << " ";
        ct += ct;
    }

    nn;
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}