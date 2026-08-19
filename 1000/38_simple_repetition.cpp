#include <bits/stdc++.h>
#include <iomanip>
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
    int x,k;
    cin >> x >> k;

    if(x == 1) {
        if(k == 2) yes;
        else no;
        re;
    }

    if(k == 1) {
        for(int i=2; i*i<=x; i++) {
            if(x%i == 0) {
                no;
                re;
            }
        }

        yes;
        re;
    }

    no;
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}