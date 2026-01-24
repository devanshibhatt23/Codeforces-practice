#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define vec vector<int> 
#define ci cin >> v[i];
#define s(v) sort(v.begin(), v.end())
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    f(i,0,n) ci;

    s(v);
    if(v[0] != 0) {
        cout << "0\n";
        return;
    }
    
    int d = n-k+1;
    map<int,int> m;
    f(i,0,n) m[v[i]] = i;

    vector<int> final;

    for(auto i : m) {
        final.push_back(i.first);
    }

    int q = m.size();

    if(q > (k-1)) {
        final.erase(final.begin()+k-1, final.end());
    }

    int l = 0;
    f(i,0,final.size()) {
        if(final[i] != l) {
            cout << l << "\n";
            return;
        }
        l++;
    }
    cout << l << "\n";
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}