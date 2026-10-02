#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> suff(26,0);
    
    for(char ch : s) suff[ch-'a']++;

    int a = 0, b = 0;

    for(int i=0; i<n; i++) {
        suff[s[i]-'a']--;

        if(i != n-1 && s[i] != s[i+1]) {
            a += ((n-i-1) - suff[s[i]-'a']);
        }
    }

    reverse(s.begin(),s.end());

    vector<int> suff1(26,0);
    
    for(char ch : s) suff1[ch-'a']++;

    for(int i=0; i<n; i++) {
        suff1[s[i]-'a']--;

        if(i != n-1 && s[i] != s[i+1]) {
            b += ((n-i-1) - suff1[s[i]-'a']);
        }
    }

    vector<int> len(n,1);
    int c = 0;

    for(int i=1; i<n; i++) {
        if(s[i] == s[i-1]) len[i] = 1;
        else if(i>=2 && s[i] == s[i-2]) len[i] = len[i-1] + 1;
        else len[i] = 2;
    }

    for(int i=0; i<n; i++) {
        c += len[i]/2;
    }
    
    cout << 1 + a + b - c << "\n";
}

signed main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}