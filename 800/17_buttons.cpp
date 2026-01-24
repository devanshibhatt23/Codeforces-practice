#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,c;
    cin >> a >> b >> c;

    if(c%2==0) {
        if(a-b <= 0) cout << "Second\n";
        else cout << "First\n";
    }
    else{
        if(a-b+1 > 0) cout << "First\n";
        else cout << "Second\n";
    }
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}