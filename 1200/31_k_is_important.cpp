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
    int n,k;
    cin >> n >> k;

    vec v(n);
    f(i,0,n) cin >> v[i];

    ll sum = 0;
    vec x;

    f(i,0,n) {
        if(i >= k-1 && i <= n-k) {
            sum += v[i];
        }
        else x.push_back(v[i]);
    }

    if(x.size()) {
        int l = 0, r = x.size()-1;
        int p = x.size()-k+1;
        int q = max(0,p);
        
        while(q--) {
            sum += max(x[l], x[r]);
            l++;
            r--;
        }
    }

    cout << sum << "\n";
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}