#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    int ans = 0;
    for(int i=n-1; i>0; i--) {
        while(v[i] <= v[i-1]) {
            v[i-1] /= 2;
            ans++;
            if(v[i-1]==0) break;
        }
        if(v[i-1]==0 && v[i]==0) {
            cout << "-1\n";
            return;
        }
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