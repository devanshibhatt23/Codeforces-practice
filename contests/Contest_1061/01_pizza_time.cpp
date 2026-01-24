#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    int n;
    cin >> n;

    long long ans = n/3;
    int added = 0;

    int left = n - 2*(n/3);

    while(left>0) {
        if(left==2) break;
        ans += left/3;
        left = left - 2*(left/3);

        if(left/3 == 0) break;
    }

    cout << ans << endl;

    // or
    // cout << (n%2 ? n/2 : n/2 - 1) << endl;
}

int main() {
    int t = 1;
    cin >> t;

    while(t--) {
        devanshi();
    }
}