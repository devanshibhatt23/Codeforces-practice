#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    for(int i=0; i<n; i++) {
        if(v[i]<0) {
            v[i] = ((-1)*v[i]);
        }
    }

    sort(v.begin(), v.end());
    auto it = v.begin();
    cout << *it << endl;
}

int main() {
    solve();
}