#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    if(n==1) {
        cout << v[0] << endl;
        return;
    }

    else {
        vector<int> v1(n);
        int k = n + 1;
        for(int i=0; i<n; i++) {
            v1[i] = k - v[i];
        }
        for(int i=0; i<n; i++) {
            cout <<  v1[i] << " ";
        }
        cout << endl;
        return;
    }
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}