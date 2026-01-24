#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define vec vector<int> 
#define ci cin >> v[i];
#define s(v) sort(v.begin(), v.end())
using namespace std;

void solve() {
    int n,m,k;
    cin >> n >> m >> k;
    k--;

    int low = 1, high = n;

    while(low < high) {
        int mid = (low+high+1)/2;
        ll ans = INT_MAX;

        for(int l=0, r=mid-1; l<k, r<n; l++, r++) {
            if(k > r) continue;

            ll left = k - l, right = r - k;
            ans = min(ans, left - 1 + max(left,right) + right);
        }

        if(ans <= m) {
            low = mid;
        }
        else {
            high = mid - 1;
        }
    }

    cout << low << "\n";
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}