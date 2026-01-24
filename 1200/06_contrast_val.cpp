#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define vec vector<int> 
#define ci cin >> v[i];
#define s(v) sort(v.begin(), v.end())
using namespace std;

void solve() {
    int n;
    cin >> n;

    vec v(n);
    f(i,0,n) ci;

    int ct = 0;
    f(i,0,n) {
        if(v[i] == v[0]) ct++;
    }

    vec a;
    int first = v[0];
    a.push_back(v[0]);

    f(i,1,n) {
        if(v[i] == first) {
            continue;
        }
        else {
            a.push_back(v[i]);
            first = v[i];
        }
    }

    if(ct == n) cout << 1 << endl;
    else if(n == 2) cout << 2 << endl;

    else {
        int ans = 2;
        n = a.size();

        f(i,1,n-1) {
            if(a[i] > a[i-1] && a[i] > a[i+1]) ans++;
            else if(a[i] < a[i-1] && a[i] < a[i+1]) ans++;
        }
        en;
    }
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}