#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    int count = 0;
    for(int i=0; i<n; i++) {
        if(v[i]==v[0]) count++;
    }

    if(count==n) {
        cout << "NO\n";
        return;
    }
    else {
        reverse(v.begin(), v.end());
        if(v[0]==v[1]) {
            int temp = v[1];
            v[1] = v[n-1];
            v[n-1] = temp;
        }
        cout << "YES\n";

        for(int i=0; i<n; i++) {
            cout << v[i] << " ";
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