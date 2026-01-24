#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define enn cout << "\n"
#define vec vector<int> 
#define ci cin >> v[i];
#define fi first
#define sec second
#define s(v) sort(v.begin(), v.end())
using namespace std;

void solve() {
    int n;
    cin >> n;

    vec v(n);

    f(i,0,n) ci

    if(v[0] == -1) v[0] = v[n-1];
    if(v[n-1] == -1) v[n-1] = v[0];
    
    f(i,0,n) {
        if(v[i] == -1) v[i] = 0;
    }

    cout << abs(v[n-1] - v[0]);
    enn;
    f(i,0,n) cout << v[i] << " ";
    enn;
}
 
int main() {
    int t = 1;
    cin >> t;

    while(t--) {
        solve();
    }
}