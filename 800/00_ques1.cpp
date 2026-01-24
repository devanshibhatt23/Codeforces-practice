// halloumi boxes

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k; 
    cin >> n >> k;
    vector<int> v(n,0);
    for(int i=0; i<n; i++) {
        cin >> v[i]; 
    }
    if(is_sorted(v.begin(), v.end())) {
        cout << "Yes\n";
        return;
    }
    if(k==1) {
        cout << "No\n";
        return;
    }
    if(k>=2) {
        cout << "Yes\n";
    }
}
int main() {
    int t; 
    cin >> t;
    while(t--) {
        solve();
    }
}