#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    long long n, x;
    cin >> n >> x;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    if(n==1) {
        cout << "0\n";
        return;
    }

    long long l = v[0] - x, r = v[0] + x;

    int ans = 0;
    
    for(int i=1; i<n; i++) {
        l = max(l, v[i]-x);
        r = min(r, v[i]+x);

        if(l>r) {
            ans++;
            l = v[i]-x;
            r = v[i]+x;
        }
    }
    cout << ans << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        devanshi();
    }
}