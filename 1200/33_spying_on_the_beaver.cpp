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

    vec v(n-1);
    f(i,0,n-1) {
        cin >> v[i];
    }

    int m;
    cin >> m;

    vec dams(m);
    f(i,0,m) cin >> dams[i];

    sort(dams.begin(), dams.end());

    cout << m-1 << " ";
    f(i,1,m) cout << dams[i] << " ";
    nn;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}