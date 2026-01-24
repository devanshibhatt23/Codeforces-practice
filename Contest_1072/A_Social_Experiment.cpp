#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define enn cout << "\n"
#define vec vector<int> 
#define ci cin >> v[i];
#define fi first
#define sec second
#define s(v) sort(v.begin(), v.end())
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    if(n == 2 || n == 3) cout << n << "\n";
    else if(n % 2 == 0) cout << "0\n";
    else cout << "1\n";
}
 
int main() {
    int t = 1;
    cin >> t;

    while(t--) {
        solve();
    }
}