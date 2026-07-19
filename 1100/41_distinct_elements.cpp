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
    f(i,0,n) {
        ci;
        v[i]--;
    }

    int k = 1;
    vec a(n);

    a[0] = 1;

    f(i,1,n) {
        int diff = v[i] - v[i-1];

        if(i - diff >= 0) {
            a[i] = a[i-diff];
        }
        else {
            k++;
            a[i] = k;
        }
    }

    f(i,0,n) cout << a[i] << " ";
    nn;
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}