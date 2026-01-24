#include <bits/stdc++.h>
using namespace std;
void devanshi() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    // int maxi = *max_element(v.begin(), v.end());

    // vector<int> s(0);
    // for(int i : v) {
    //     s.push_back(maxi & i);
    // }

    // cout << *min_element(s.begin(), s.end()) << endl;

    int ans = v[0];
    for(int i=1; i<n; i++) {
        ans = ans & v[i];
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