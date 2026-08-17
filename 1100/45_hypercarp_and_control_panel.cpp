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

    vec v(n+2,0);
    f(i,1,n+1) ci;

    int ans = 0;
    f(i,1,n+1) {
        if(v[i] != v[i-1]) ans++;
    }

    int add = 0;

    f(i,0,n-1) {
        int a = v[i], b = v[i+1], c = v[i+2], d = v[i+3];

        if(a==b && c==d && b!=c) add = 2;
        if(c==d && b!=c && a!=c) add = max(add,1);
        if(a==b && b!=c && a!=d) add = max(add,1);
    }

    ans += add;
    en;
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}