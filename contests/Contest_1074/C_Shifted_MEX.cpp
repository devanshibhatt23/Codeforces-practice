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

    vec v(n);
    f(i,0,n) ci

    map<int,int> m;
    s(v);

    f(i,0,n) m[v[i]] = i;

    vec a;
    for(auto i : m) {
        a.push_back(i.first);
    }

    n = a.size();
    int ans = 0;

    f(i,0,n) {
        int x = a[i];
        int mex = 0;

        f(j,0,n) {
            int val = a[j] - x;
            if(val == mex) mex++;
            else if(val > mex) break;
        }
        ans = max(ans,mex);
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