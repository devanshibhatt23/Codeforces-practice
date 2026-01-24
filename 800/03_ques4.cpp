// game with integers

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    cin >> n;
    if(n%3 == 1 || n%3 == 2) {
        cout << "First\n";
        return;
    }
    cout << "Second\n";
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}