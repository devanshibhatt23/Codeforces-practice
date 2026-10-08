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

    vector<char> v1(n), v2(n);

    f(i,0,n) cin >> v1[i];
    f(i,0,n) cin >> v2[i];

    int ans = 0;
    f(i,1,n-1) {
        if(v1[i] != 'x' && v1[i-1] == '.' && v1[i+1] == '.' && v2[i] == '.' && v2[i-1] == 'x' && v2[i+1] == 'x') ans++;
        if(v2[i] != 'x' && v2[i-1] == '.' && v2[i+1] == '.' && v1[i] == '.' && v1[i-1] == 'x' && v1[i+1] == 'x') ans++;
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