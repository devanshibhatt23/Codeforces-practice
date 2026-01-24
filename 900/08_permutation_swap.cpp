#include <bits/stdc++.h>
#include <algorithm>
#include <numeric>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

void devanshi() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    // vector<int> diff(0);
    // for(int i=1,j=0; i<=n && j<n; i++, j++) {
    //     if(v[j]!=i) diff.push_back(abs(v[j]-i));
    // }

    // cout << *(min_element(diff.begin(), diff.end())) << endl;

    int ans = 0;
    for(int i=0; i<n; i++) {
        ans = gcd(ans, abs(v[i]-i-1));
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        devanshi();
    }
}
