// trulimero trulicina
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m,k;
    cin >> n >> m >> k;

    vector<vector<int>> v(n, vector<int>(m));

    int start = 1;
    for(int j=0; j<k; j++) {
        v[0][j] = start;
        start++;
    }
    
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}