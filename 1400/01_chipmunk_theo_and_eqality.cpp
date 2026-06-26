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

void solve() {
    int n;
    cin >> n;

    vec v(n);
    f(i,0,n) ci;
    s(v);

    int mini = *min_element(v.begin(),v.end());

    vec possible;

    while(mini > 1) {
        if(mini % 2 == 0) {
            possible.push_back(mini);
            mini /= 2;
        }
        else {
            possible.push_back(mini);
            mini++;
        }
    }

    if(mini == 1) {
        possible.push_back(1);
        possible.push_back(2);
    }

    ll ans = INT_MAX;

    for(int val : possible) {
        bool check = 1;
        ll temp = 0;

        for(int i : v) {
            int ct = 0;

            while(i != val) {
                if(i % 2 == 0) {
                    i /= 2;
                    ct++;
                }
                else {
                    i++;
                    ct++;
                }
                if(ct > 100) {
                    check = 0;
                    break;
                }
            }

            if(check == 0) break;
            temp += ct;
        }

        if(check == 1) ans = min(ans,temp);
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