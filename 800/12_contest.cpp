// tung tung sahur

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string p, s;
    cin >> p >> s;

    int n = p.size();
    int m = s.size();
    
    if(m<n || m>(2*n) || p[0]!=s[0]) {
        cout << "NO\n";
        return;
    }
    
    vector<int> pp, ss;

    int count = 1;

    for(int i=1; i<n; i++) {
        if(p[i] != p[i-1]) {
            pp.push_back(count);
            count = 1;
        }
        else count++;
    }
    pp.push_back(count);

    count = 1;
    for(int i=1; i<m; i++) {
        if(s[i] != s[i-1]) {
            ss.push_back(count);
            count = 1;
        }
        else count++;
    }
    ss.push_back(count);

    if(pp.size() != ss.size()) {
        cout << "NO\n";
        return;
    }

    for(int i=0; i<pp.size(); i++) {
        if(ss[i]<pp[i] || ss[i]>(2*pp[i])) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main() {
    int t=1;
    cin >> t;
    while(t--) {
        solve();
    }
}