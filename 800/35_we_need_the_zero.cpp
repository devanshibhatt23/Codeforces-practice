#include <bits/stdc++.h>
#include <stdio.h>
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

    int xor_ = 0;
    for(int i=0; i<n; i++) {
        xor_ ^= v[i];
    }

    if(n%2 == 0) {
        if(xor_) cout << "-1\n";
        else cout << "0\n";
    }

    else {
        cout << xor_ << endl;
    }
}

int main() {
    // this takes input from input.txt and prints output in output.txt file
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}