#include <bits/stdc++.h>
#define ll long long
#define s second
#define f first
#define f(i,s,e) for(int i=s; i<e; i++)
#define en << "\n"
using namespace std;

vector<int> max3(vector<int> &v) {
    vector<pair<int,int>> vec;

    for(int i=0; i<v.size(); i++) {
        vec.push_back({v[i],i});
    }

    sort(vec.rbegin(), vec.rend());

    vector<int> ans(3);
    for(int i=0; i<3; i++) {
        ans[i] = vec[i].s;
    }

    return ans;
}

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n), b(n), c(n);
    
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> b[i];
    for(int i=0; i<n; i++) cin >> c[i];

    vector<int> v1 = max3(a), v2 = max3(b), v3 = max3(c);
    int ans = 0;

    f(i,0,3) {
        f(j,0,3) {
            f(k,0,3) {
                if(v1[i] == v2[j] || v2[j] == v3[k] || v1[i] == v3[k]) continue;
                ans = max(ans, a[v1[i]] + b[v2[j]] + c[v3[k]]);
            }
        }
    }

    cout << ans en;
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}