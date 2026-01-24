#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    int n, q;
    cin >> n >> q;
    vector<int> v(n);

    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    vector<long long> prefix(n);
    
    prefix[0] = v[0];
    for(int i=1; i<n; i++) {
        prefix[i] += prefix[i-1];
        prefix[i] += v[i];
    }

    // for(int i=0; i<n; i++) {
    //     cout << prefix[i] << " ";
    // }
    // cout << endl;

    
    while(q--) {
        int l, r, k;
        cin >> l >> r >> k;

        long long old_sum = prefix[r-1];
        if(l>1) old_sum -= prefix[l-2];
        
        long long ans = prefix[n-1] - old_sum + k*(r-l+1);
        // 10 - (10 - 1) + 2(10-1+1) 
        // 1 + 2(10-1+1) + (10 - 10)

        if(ans % 2 != 0) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        devanshi();
    }
}
