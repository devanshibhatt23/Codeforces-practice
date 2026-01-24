#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int n = s.size();

    for(int i=0; i<n-1; i++) {
        if(s[i] == '>' && s[i+1] == '*') {
            cout << '-1\n';
            return;
        }
        else if(s[i] == '*' && s[i+1] == '<') {
            cout << '-1\n';
            return;
        }
    }

    vector<int> a;

    int c1 = 0, c2 = 0, k = 0;
    for(int i=0; i<n; i++) {
        if(s[i] == '>') {
            if(c2+k != 0) a.push_back(c2 + k);
            c2 = 0;
            c1++;
        }
        else if(s[i] == '*') {
            k++;
            // if(c1 != 0) c1++;
            // else c2++;
        }
        else {
            if(c1 != 0) a.push_back(c1);
            c1 = 0;
            c2++;
        }
    }
    a.push_back(c1);
    a.push_back(c2);

    for(int i : a) cout << i << " ";
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
} 