#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,a;
    cin >> n >> a;
    
    vector<int> v(n);

    for(int i=0; i<n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int j;

    for(int i=0; i<n; i++) {
        if(v[i] > a) {
            j = i;
            break;
        } 
        else if(v[i] == a) {
            j = i;
            break;
        }
    }

    int k = max(j, n-j+1);

    if(k == j) {
        cout << v[j-1] << endl;
        return;
    }
    else {
        cout << 
    }
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}