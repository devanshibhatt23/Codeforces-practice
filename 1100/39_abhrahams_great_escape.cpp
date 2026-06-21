#include <bits/stdc++.h>
#include <queue>
#include <unordered_set>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define nn cout << "\n"
#define vec vector<ll> 
#define ci cin >> v[i]
#define s(v) sort(v.begin(), v.end())
#include <map>
using namespace std;

void solve() {
    int n,k;
    cin >> n >> k;

    if(k == n*n - 1) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    f(i,0,n) {
        string s = "";
        
        f(j,0,n) {
            if(k>0) {
                s.push_back('U');
                k--;
            }
            else if(i == n-1 && j == n-1) s.push_back('L');
            else if(i == n-1) s.push_back('R');
            else s.push_back('D');
        }

        cout << s << "\n";
    }
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}