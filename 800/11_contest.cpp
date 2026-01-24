// brr brr patapim

#include <bits/stdc++.h>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<vector<int>> v(n, vector<int>(n));
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> v[i][j];
        }
    }

    vector<int> v1(2*n);
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            v1[i+j+1] = v[i][j];
        }
    }

    int sum = 0;
    for(int i=1; i<2*n; i++) {
        sum += v1[i];
    }
    v1[0] = (n*(2*n + 1)) - sum;
    
    for(int i=0; i<2*n; i++) {
        cout << v1[i] << " ";
    }
    cout << endl;
}

int main() {
    int t=1;
    cin >> t;
    while(t--) {
        solve();
    }
}