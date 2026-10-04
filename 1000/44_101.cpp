#include <bits/stdc++.h>
#include <queue>
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

void solve() {
    int n;
    cin >> n;

    vec v(n);
    f(i,0,n) cin >> v[i];

    vec pref(n,0), suff(n,0);
    
    if(v[0] == 1) pref[0] = 1;
    if(v[n-1] == 1) suff[n-1] = 1;

    f(i,1,n) {
        pref[i] = pref[i-1];
        if(v[i] == 1) pref[i]++;
    }

    for(int i=n-2; i>=0; i--) {
        suff[i] = suff[i+1];
        if(v[i] == 1) suff[i]++;
    }

    f(i,0,n) {
        if(v[i] == -1) {
            if(pref[i] && suff[i]) {
                v[i] = 0;
            }
        }
    }

    f(i,0,n) {
        if(v[i] == 1) break;
        else if(v[i] == -1) {
            v[i] = 1;
            break;
        }
    }

    for(int i=n-1; i>=0; i--) {
        if(v[i] == 1) break;
        else if(v[i] == -1) {
            v[i] = 1;
            break;
        }
    }

    f(i,0,n) {
        if(v[i] == -1) v[i] = 0;
    }

    f(i,0,n) cout << v[i] << " ";
    nn;
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}