 #include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define vec vector<int> 
#define ci cin >> v[i];
#define s(v) sort(v.begin(), v.end())
using namespace std;

void solve() {
    int x,y,k;
    cin >> x >> y >> k;

    int ans = INT_MAX;
    int ct = 0;

    while(x != y) {
        if(x < y) swap(x,y);

        ans = min(ans, x-y+ct);
        ct++;
        x /= k;
    }

    ans = min(ans,ct);
    en;
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}