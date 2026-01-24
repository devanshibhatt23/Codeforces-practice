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

    vec a(n), b(n);
    int a_ones = 0, b_ones = 0;

    f(i,0,n) {
        cin >> a[i];
        if(a[i] == 1) a_ones++;
    }

    f(i,0,n) {
        cin >> b[i];
        if(b[i] == 1) b_ones++;
    }

    if(a_ones % 2 == b_ones % 2) cout << "Tie\n";
    else {
        for(int i=n-1; i>=0; i--) {
            if(a[i] != b[i]) {
                if(i % 2 == 0) cout << "Ajisai\n";
                else cout << "Mai\n";
                return;
            }
        }
    }
}
 
int main() {
    int t = 1;
    cin >> t;

    while(t--) {
        solve();
    }
}