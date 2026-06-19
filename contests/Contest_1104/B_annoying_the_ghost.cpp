#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define nn cout << "\n"
#define vec vector<ll> 
#define ci cin >> v[i]
#define s(v) sort(v.begin(), v.end())
#include <map>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vec a(n), b(n);
    f(i,0,n) cin >> a[i];
    f(i,0,n) cin >> b[i];
   
    ll ans = 0;

    f(i,0,n) {
        bool check = 0;
        f(j,i,n) {
            if(a[j] <= b[i]) {
                check = 1;
                ans += (j-i);

                reverse(a.begin()+i, a.begin()+j);
                reverse(a.begin()+i, a.begin()+j+1);
                break;
            }
        }

        if(!check) {
            ans = -1;
            break;
        }
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