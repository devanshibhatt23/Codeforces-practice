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

    string s;
    cin >> s;

    vec v;
    int ct = 0, idx = -1;

    f(i,0,n) {
        if(s[i] == '0') {
            ct++;
            idx = i;
            v.push_back(i+1);
        }
    }
    // cout << idx << "\n";

    if(idx == -1) {
        cout << n << "\n";
        f(i,1,n+1) cout << i << " ";
        cout << "\n";
    }
    else {
        f(i,idx+1,n) {
            if(s[i] == 1) {
                ct++;
                v.push_back(i+1);
            }
        }

        cout << ct << "\n";
        f(i,0,v.size()) cout << v[i] << " ";
        cout << "\n";
    }
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}