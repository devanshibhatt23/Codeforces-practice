#include <bits/stdc++.h>
#include <stack>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define nn cout << "\n"
#define vec vector<ll> 
#define ci cin >> v[i];
#define s(v) sort(v.begin(), v.end())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define re return;
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    bool is_open = 0;

    f(i,0,n) {
        if(s[i] == '_') {
            if(is_open) {
                s[i] = ')';
                is_open = 0;
            }
            else {
                s[i] = '(';
                is_open = 1;
            }
        }
        else if(s[i] == '(') is_open = 1;
        else is_open = 0;
    }

    int ans = 0;
    
    f(i,1,n+1) {
        if(s[i-1] == '(') ans -= i;
        else ans += i;
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