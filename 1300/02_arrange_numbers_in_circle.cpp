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

    s(v);

    ll ct1 = 0, ans = 0, capacity = 0;

    f(i,0,n) {
        if(v[i] == 1) ct1++;
        else {
            ans += v[i];
            capacity += (v[i]/2 - 1);
        }
    }

    if(ct1 == n-1) {
        if(v[n-1] == 2) {
            if(ct1 >= 1) { 
                cout << 3; 
                nn; 
            }
            else {
                cout << 0;
                nn;
            }
        }
        else {
            cout << ans + min(ct1,v[n-1]/2);
            nn;
        }
        re;
    }

    ans += min(capacity,ct1);
    en;
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}