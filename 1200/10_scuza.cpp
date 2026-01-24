#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define vec vector<int> 
#define ci cin >> v[i];
#define s(v) sort(v.begin(), v.end())
using namespace std;

int binarySearch(vector<ll> &v, int x) {
    int n = v.size();
    int st = 0, end = n-1, ans = -1;

    while(st <= end) {
        int mid = (st+end)/2;
        if(v[mid] > x) {
            end = mid-1;
        }
        else {
            ans = mid;
            st = mid+1;
        }
    }
    return ans;
}

void solve() {
    ll n, q;
    cin >> n >> q;

    vector<ll> v(n);
    f(i,0,n) ci;

    vector<ll> pref(n), maxjump(n);
    pref[0] = v[0];
    maxjump[0] = v[0];

    f(i,1,n) {
        pref[i] = pref[i-1] + v[i];
        maxjump[i] = max(maxjump[i-1], v[i]);
    }

    while(q--) {
        ll x;
        cin >> x;

        int idx = binarySearch(maxjump,x);
        if(idx == -1) cout << 0 << " ";
        else cout << pref[idx] << " ";
    }
    cout << endl;
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}