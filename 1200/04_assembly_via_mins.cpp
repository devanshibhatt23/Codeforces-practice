#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define vec vector<int> 
#define ci cin >> v[i];
#define s(v) sort(v.begin(), v.end())
using namespace std;

void solve() {
    int n;
    cin >> n;

    int k = (n*(n-1)) / 2;

    vec v(k);
    f(i,0,k) ci;

    s(v);

    vec ans;
 
    int ct = n;
    for(int i=0; i<k; i+=ct) {
        ans.push_back(v[i]);
        ct--;
    }
    
    int q = ans.size();

    for(int i=q; i<n; i++) {
        ans.push_back(ans[q-1]);
    }

    f(i,0,n) cout << ans[i] << " ";
    cout << endl;
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}