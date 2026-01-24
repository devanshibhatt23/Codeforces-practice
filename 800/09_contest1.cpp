#include <bits/stdc++.h>
using namespace std;

void solve() {
    string arr[3];
    for(int i=0; i<3; i++) {
        string s;
        cin >> s;
        arr[i] = s;
    }

    for(int i=0; i<3; i++) {
        cout << arr[i][0];
    }
    cout << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}