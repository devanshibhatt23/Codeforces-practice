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

ll x,s;

int func(int idx, string a) {
    int tables = 0, ans = 0;

    for(char ch : a) {
        if(ch == 'I') {
            if(tables < x) {
                tables++;
                ans++;
            }
        }
        else if(ch == 'E') {
            if(ans < tables*s) ans++;
        }
        else {
            if(idx > 0) {
                if(tables < x) {
                    tables++;
                    ans++;
                }
                idx--;
            }
            else {
                if(ans < tables*s) ans++;
            }
        }
    }

    return ans;
}

void solve() {
    int n;
    cin >> n >> x >> s;

    string a;
    cin >> a;

    int ct_a = 0;
    int ans = INT_MIN;

    for(char ch : a) if(ch == 'A') ct_a++;

    int l = 0, r = ct_a;

    while(l < r) {
        int mid = (l+r)/2;

        int ans1 = func(mid,a);
        int ans2 = func(mid+1,a);

        if(ans1 > ans2) {
            r = mid;
        }
        else {
            l = mid+1;
        }
    }

    ans = func(l,a);

    en;
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}