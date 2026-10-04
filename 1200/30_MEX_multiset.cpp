#include <bits/stdc++.h>
#include <queue>
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
    f(i,0,n) cin >> v[i];

    int ct0 = 0;
    f(i,0,n) {
        if(v[i] == 0) ct0++;
    }

    if(ct0 == 1) {
        no;
        re;
    }

    yes;
    
    bool zero = 0;

    f(i,0,n) {
        if(v[i] == 0 && zero == 0) {
            cout << "A";
            zero = 1;
        }
        else if(v[i] == 0) cout << "B";
        else cout << "C";
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