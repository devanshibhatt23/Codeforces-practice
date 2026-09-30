#include <bits/stdc++.h>
#include <string>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define nn cout << "\n"
#define vec vector<ll> 
#define ci cin >> v[i];
#define s(v) sort(v.begin(), v.end())
#define yes cout << "YES"
#define no cout << "NO"
#define re return;
using namespace std;

void solve() {
    int n;
    cin >> n;

    vec v(n);
    f(i,0,n) cin >> v[i];

    f(i,0,n) v[i] = v[i]-i;

    s(v);
    reverse(v.begin(),v.end());

    int ct = 1;
    int ans = 0;

    f(i,1,n) {
        if(v[i-1] - v[i] > 1) {
            ans = max(ans,ct);
            ct = 1;
        }
        else if(v[i] != v[i-1]) ct++;
    }

    ans = max(ans,ct);

    en;
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}