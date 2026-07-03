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

int hcf(int a, int b) {
    if(b == 0) return a;
    return hcf(b,a%b);
}

ll lcm_(int a, int b) {
    return ((a*1LL*b) / hcf(a,b));
}

void solve() {
    int n;
    cin >> n;

    vec v(n);
    f(i,0,n) ci;
    f(i,0,n) ci;

    vec gcd;

    f(i,0,n-1) {
        gcd.push_back(hcf(v[i],v[i+1]));
    }

    int ans = 0;

    if(gcd[0] < v[0]) ans++;
    if(gcd[n-2] < v[n-1]) ans++;

    f(i,1,n-1) {
        int prev = gcd[i-1];
        int next = gcd[i];

        if(v[i] > lcm_(prev,next)) ans++;
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