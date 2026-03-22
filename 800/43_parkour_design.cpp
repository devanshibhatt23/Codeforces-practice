#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define vec vector<int> 
#define ci cin >> v[i];
#define s(v) sort(v.begin(), v.end())
using namespace std;

void solve() {
    ll x,y;
    cin >> x >> y;

    bool check = 0;

    if((x-2*y)>=0 && (x-2*y)%3==0) {
        if(y>=0) check = 1;
    }

    if(y<=0 && (x+4*y)>=0 && (x+4*y)%3==0) check = 1;

    if(check) cout << "YES\n";
    else cout << "NO\n";
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}