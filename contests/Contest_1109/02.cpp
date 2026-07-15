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

    bool a = 1;
    ll sum = 0;

    f(i,1,n+1) {
        sum += v[i-1];

        if((i*1LL*(i+1)) / 2 > sum) {
            a = 0;
        }
    }

    if(a == 0) no;
    else yes;

    re;
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}