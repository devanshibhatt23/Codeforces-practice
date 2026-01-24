#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define vec vector<int> 
#define ci cin >> v[i];
#define s(v) sort(v.begin(), v.end())
using namespace std;

void solve() {
    int l,a,b;
    cin >> l >> a >> b;

    unordered_map<int,int> m;
    m[a] = 1;
    int i = 1;

    int ans = INT_MIN;
    while(i) {
        int curr = (a+i*b) % l;
        if(m.count(curr)) {
            break;
        }
        else {
            ans = max(ans, curr);
            m[curr] = 1;
        }
        i++;
    }

    ans = max(ans, a);
    en;
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}