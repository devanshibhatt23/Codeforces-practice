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

    vec v(n);
    f(i,0,n) ci;

    ll sum = 0;
    int odd = 0;

    f(i,0,n) {
        sum += v[i];
        if(v[i] % 2) odd++;
    }

    if(odd == n || odd == 0) {
        cout << *max_element(v.begin(), v.end());
        nn;
        re;
    }

    cout << sum - odd + 1;
    nn;
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}