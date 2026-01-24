#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n,k;
    cin >> n >> k;

    vector<vector<int>> v(n, vector<int> (n));
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> v[i][j];
        }
    }

    vector<vector<int>> a = v;

    for(int i=0; i<n; i++) {
        reverse(v[i].begin(), v[i].end());
    }

    reverse(v.begin(), v.end());

    int ct = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(a[i][j] != v[i][j]) ct++;
        }
    }

    ct /= 2;

    if(k < ct) cout << "NO\n";
    else {
        if((k-ct) % 2 == 0) cout << "YES\n";
        else if(n%2 == 1) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}