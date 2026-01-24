#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,q;
    cin >> n >> q;

    vector<long long> a(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    vector<long long> x(q);
    for(int i=0; i<q; i++) cin >> x[i];

    // sort(x.begin(), x.end());
    // reverse(x.begin(), x.end());

    // for(auto it : v) {
    //     for(int j=0; j<x.size(); j++) {
    //         long long d = pow(2,x[j]);
    //         if(a[it.first] % d == 0) {
    //             a[it.first] += (d/2);
    //         }
    //         else {
    //             x.erase(x.begin()+j, x.begin()+j+1);
    //             j--;
    //         }
    //     }
    // }

    int prev = 31;

    for(int i=0; i<q; i++) {
        if(x[i] >= prev) continue;
        else {
            for(int j=0; j<n; j++) {
                long long d = pow(2,x[i]);
                if(a[j] % d == 0) a[j] += d/2;
            }
        } 
        prev = x[i];
    }

    for(long long i : a) cout << i << " ";
    cout << endl;
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}