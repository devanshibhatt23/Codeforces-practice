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
    int n,k,m;
    cin >> n >> k >> m;

    if(k > m) {
        no;
        re;
    }

    yes;

    int a = m-(k-1);
    vec ans;

    while(ans.size() < n) {
        int x = ans.size();
        f(i,0,k-1) ans.push_back(1);
        
        ans.push_back(a);
    }

    f(i,0,n) cout << ans[i] << " ";
    nn;
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}