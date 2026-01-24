#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define vec vector<int> 
#define ci cin >> v[i];
#define s(v) sort(v.begin(), v.end())
using namespace std;

void solve() {
    string s;
    cin >> s;

    int n = s.size();

    f(i,0,n-1) {
        if(s[i] == '>' && (s[i+1] == '*' || s[i+1] == '<')) {
            cout << "-1\n";
            return;
        }
        if(s[i] == '*' && (s[i+1] == '<' || s[i+1] == '*')) {
            cout << "-1\n";
            return;
        }
    }

    vec v;
    int ct = 0;

    f(i,0,n) {
        if(s[i] == '<' || s[i] == '*') {
            ct++;
        }    
        else {
            v.push_back(ct);
            ct = 0;
        }
    }
    v.push_back(ct);

    ct = 0;
    f(i,0,n) {
        if(s[i] == '>' || s[i] == '*') {
            ct++;
        }    
        else {
            v.push_back(ct);
            ct = 0;
        }
    }
    v.push_back(ct);

    // for(int i : v) cout << i << " ";
    // cout << "\n";
    cout << *max_element(v.begin(), v.end()) << "\n";
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}