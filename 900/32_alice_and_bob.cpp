#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define vec vector<ll> 
#define ci cin >> v[i]
#define s(v) sort(v.begin(), v.end())
using namespace std;

void solve() {
    int n,a;
    cin >> n >> a;

    vec v(n);
    f(i,0,n) ci;

    s(v);

    int ct1 = 0, ct2 = 0;
    f(i,0,n) {
        if(v[i] < a) ct1++;
    }

    f(i,0,n) {
        if(v[i] > a) ct2++;
    }

    int ans;
    if(ct1 >= ct2) ans = a-1;
    else ans = a+1;

    en;
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}