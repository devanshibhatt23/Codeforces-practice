#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define vec vector<ll> 
#define ci cin >> v[i];
#define s(v) sort(v.begin(), v.end())
using namespace std;

void solve() {
    int a,b;
    cin >> a >> b;

    int ct = 0, wh = 0, dark = 0, ans = 0;
    while(1) {
        if(ct%2 == 0) dark += (1<<ct);
        else wh += (1<<ct);

        if(wh>a || dark>b) break;
        else ct++;
    }
    ans = ct;

    ct = 0, wh = 0, dark = 0;
    while(1) {
        if(ct%2 == 0) wh += (1<<ct);
        else dark += (1<<ct);

        if(wh>a || dark>b) break;
        else ct++;
    }

    ans = max(ans,ct);
    en;
}
 
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}