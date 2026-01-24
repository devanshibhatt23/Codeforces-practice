#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    int n,k; cin >> n >> k;
    string s; cin >> s;

    vector<int> prefix(n);

    int ct = 0;
    for(int i=0; i<n; i++) {
        if(s[i] == 'W') ct++;
        prefix[i] = ct;
    }

    vector<int> white;

    for(int i=0; i<=n-k; i++) {
        if(i==0) white.push_back(prefix[k-1]);
        else white.push_back(prefix[i+k-1] - prefix[i-1]);
    }

    // for(int i : white) cout << i << " ";
    // cout << endl << endl;
    cout << *min_element(white.begin(), white.end()) << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        devanshi();
    }
}