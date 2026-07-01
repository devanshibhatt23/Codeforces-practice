#include <bits/stdc++.h>
#include <unordered_set>
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

    string k = "1";
    while(n > 0) {
        k += "0";
        n /= 10;
    }

    k.pop_back();
    k += "1";
    cout << k;
    nn;
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}