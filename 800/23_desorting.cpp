#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    if(!is_sorted(v.begin(), v.end())) {
        cout << "0\n";
        return;
    }

    else if(n==2) {
        if(v[0]==v[1]) {
            cout << "1\n";
            return;
        }
        else {
            int m = v[1] - v[0];
            cout << m/2 + 1 << endl;
        }
    }
    
    else {
        int min_diff = v[1]-v[0];
        for(int i=1; i<n; i++) {
            if((v[i] - v[i-1]) < min_diff) {
                min_diff = v[i] - v[i-1];
            }
        }
        cout << min_diff/2 + 1 << endl;
    }
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}