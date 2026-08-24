#include <bits/stdc++.h>
#include <iomanip>
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
    int n,c;
    cin >> n >> c;

    vec a(n), b(n);
    f(i,0,n) cin >> a[i];
    f(i,0,n) cin >> b[i];

    int ans = 0;

    int maxi = *max_element(a.begin(), a.end());
    int mini = *min_element(b.begin(), b.end());

    if(maxi < mini) {
        cout << "-1\n";
        re;
    }

    f(i,0,n) {
        if(a[i] < b[i]) {
            ans += c;
            break;
        }
    }

    if(ans == 0) {
        int ans1 = 0;

        f(i,0,n) {
            ans1 += (a[i] - b[i]);
        }

        s(a), s(b);

        f(i,0,n) {
            if(a[i] < b[i]) {
                cout << ans1;
                nn;
                re;
            }
        }

        ans += c;

        f(i,0,n) {
            ans += (a[i] - b[i]);
        }

        cout << min(ans, ans1);
        nn;
        re;
    }

    s(a), s(b);

    f(i,0,n) {
        if(a[i] < b[i]) {
            cout << "-1\n";
            re;
        }
        
        ans += (a[i] - b[i]);
    }

    en;
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}