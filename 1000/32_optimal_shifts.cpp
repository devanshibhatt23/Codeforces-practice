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

    string s;
    cin >> s;

    s = s + s;
    n *= 2;

    vec v;

    int ct = 0;
    f(i,0,n) {
        if(s[i] == '0') ct++;
        else {
            v.push_back(ct);
            ct = 0;
        }
    }

    cout << *max_element(v.begin(), v.end()) << "\n";
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}