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

    int neg_ct = 0, zero_ct = 0;
    f(i,0,n) {
        if(v[i] == -1) neg_ct++;
        if(v[i] == 0) zero_ct++;
    }

    if(neg_ct % 2 == 1) {
        cout << zero_ct + 2 << "\n";
    }
    else cout << zero_ct << "\n";
}
 
int main() {
    int t = 1;
    cin >> t;

    while(t--) {
        solve();
    }
}