#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> v(n);

    for(int i=0; i<n; i++) cin >> v[i];

    long long sum = v[0], ans = v[0];

    for(int i=1; i<n; i++) {
        if((v[i]%2 == 0 && v[i-1]%2 != 0) || (v[i]%2 != 0 && v[i-1]%2 == 0)) {
            if(sum < 0) sum = 0;
            sum += v[i];

            ans = max(ans,sum);
        }
        else {
            sum = v[i];
            ans = max(ans,sum);
        }
    }

    cout << ans << endl;
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}