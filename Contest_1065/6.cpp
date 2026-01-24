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

    if(n <= 8) {
        f(i,1,n+1) cout << i << " ";
        enn;
        return;
    }

    else {
        vec ans(0);
        ans.push_back(1);
        ans.push_back(3);

        if(n <= 5) ans.push_back(5);
        if(n <= 7) ans.push_back(7);
        if(n <= 11) ans.push_back(11);
        if(n <= 13) ans.push_back(13);
        if(n <= 17) ans.push_back(17);

        vec v(0);
        f(i,15,n+1) {
            if(i % 2) {
                if(i != 17) {
                    v.push_back(i);
                }
            }
        }

        int ct = 0;
        for(int i=2; i<=n; i+=4) {
            ans.push_back(i);
            ans.push_back(i+2);
            if(ct < v.size()) ans.push_back(v[ct]);
            ct++;
        }

        f(i,0,ans.size()) cout << ans[i] << " ";
        enn;
    }
}
 
int main() {
    int t = 1;
    cin >> t;

    while(t--) {
        solve();
    }
}