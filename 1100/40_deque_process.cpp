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

    int l = 0, r = n-1;
    int ct = 1;

    while(l <= r) {
        if(ct % 2) {
            if(v[l] <= v[r]) {
                cout << "L";
                l++;
            }
            else {
                cout << "R";
                r--;
            }
        }
        else {
            if(v[l] >= v[r]) {
                cout << "L";
                l++;
            }
            else {
                cout << "R";
                r--;
            }
        }
        ct++;
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