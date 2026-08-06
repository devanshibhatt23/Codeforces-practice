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

bool check(int m, vector<int> &l, vector<int> &r, vector<int> &u, vector<int> &v) {
    int n = l.size()-1;
    int j = 1;

    for(int i=1; i<=n && j<=m; i++) {
        int x = m-j+1;

        if((j < l[i] || j > r[i]) && (x < u[i] || x > v[i])) {
            j++;
        }
    }

    if(j == m+1) return 1;
    return 0;
}

void solve() {
    int n;
    cin >> n;

    vector<int> l(n+1),r(n+1),u(n+1),v(n+1);

    f(i,1,n+1) {
        cin >> l[i] >> r[i] >> u[i] >> v[i];
    }

    for(int m=n; m>=1; m--) {
        if(check(m,l,r,u,v)) {
            cout << m;
            nn;
            re;
        }
    }

    cout << "0\n";
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}