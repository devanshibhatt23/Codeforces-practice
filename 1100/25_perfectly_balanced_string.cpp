#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    string s;
    cin >> s;

    int n = s.size();
    int k;
    set<char> str;

    for(int i=0; i<n; i++) {
        if(str.find(s[i]) == str.end()) {
            str.insert(s[i]);
            k = i;
        }
        else {
            break;
        }
    }
    // cout << k << endl;
    k++;

    for(int i=k; i<n; i++) {
        if(s[i] != s[i-k]) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}