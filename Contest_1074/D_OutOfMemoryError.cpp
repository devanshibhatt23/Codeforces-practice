#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define vec vector<int> 
#define ci cin >> v[i];
#define s(v) sort(v.begin(), v.end())
using namespace std;

void solve() {
    int n,m,h;
    cin >> n >> m >> h;

    vec v(n);
    f(i,0,n) ci
    vec a(n), last(n,-1);

    int x = 0;

    while(m--) {
        int idx, val;
        cin >> idx >> val;
        idx--;

        if(last[idx] != x) {
            last[idx] = x;
            a[idx] = 0; 
        }

        a[idx] += val;

        if(v[idx] + a[idx] > h) x++;
    }

    f(i,0,n) {
        if(last[i] == x) cout << v[i] + a[i] << " ";
        else cout << v[i] << " ";
    }
    cout << "\n";
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}