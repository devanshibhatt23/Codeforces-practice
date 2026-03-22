#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define vec vector<int> 
#define ci cin >> v[i];
#define s(v) sort(v.begin(), v.end())
using namespace std;

void solve() {
    int x;
    cin >> x;

    int ans = 0;

    f(y,x+1,x+82) {
        int sum = 0;
        int k = y;

        while(k >= 1) {
            sum += k%10;
            k /= 10;
        }

        if(sum == y-x) ans++;
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