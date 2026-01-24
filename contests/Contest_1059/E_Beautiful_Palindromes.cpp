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
    int n, k;
    cin >> n >> k;
    
    vec v(n);
    f(i,0,n) ci

    map<int,int> m;
    f(i,0,n) m[v[i]] = i;

    vec ans;

    int ct = 0;

    if(m.size() == n) {
        while(ans.size() != k) {
            if(ct % 3 == 0) ans.push_back(v[0]);
            else if(ct % 3 == 1) ans.push_back(v[1]);
            else if(ct % 3 == 2) ans.push_back(v[2]);
            ct++;
        }

        f(i,0,k) cout << ans[i] << " ";
        enn;
    }

    else {
        int l = 0;
        int diff_ele = -1, diff2 = -1;

        while(l <= n) {
            l++;
            if(m.count(l) == 0) {
                diff_ele = l;
                m[l] = 0;
                break;
            }
        }

        f(i,0,n) {
            if(v[i] != diff_ele && v[i] != v[n-1]) {
                diff2 = v[i];
                break;
            }
        }

        l = 0;

        if(diff2 == -1) {
            while(l <= n) {
                l++;
                if(m.count(l) == 0) {
                    diff2 = l;
                    break;
                }
            }
        }

        ct = 0;
        while(ans.size() != k) {
            if(ct % 3 == 0) ans.push_back(diff_ele);
            else if(ct % 3 == 1) ans.push_back(diff2);
            else if(ct % 3 == 2) ans.push_back(v[n-1]);
            ct++;
        }

        f(i,0,k) cout << ans[i] << " ";
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