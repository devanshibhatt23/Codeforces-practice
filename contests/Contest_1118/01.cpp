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

int gcd_(int a, int b) {
    if(b == 0) return a;
    return gcd_(b,a%b);
}

void solve() {
    int n;
    cin >> n;

    vec v(n);
    f(i,0,n) cin >> v[i];

    cout << gcd_(v[0],v[n-1]);
    nn;
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}