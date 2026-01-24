#include <bits/stdc++.h>
#include <map>
using namespace std;

void devanshi() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> b[i];

    map<int,int> counts_a, counts_b;

    int count = 1;
    for(int i=0; i<n; i++) {
        if(i != n-1) {
            if(a[i] == a[i+1]) count++;
            else {
                // counts_a.push_back({a[i], count});
                counts_a[a[i]] = max(counts_a[a[i]], count);
                count = 1;
            }
        }
        else {
            // counts_a.push_back({a[i], count});
            counts_a[a[i]] = max(counts_a[a[i]], count);
        }
    }

    count = 1;
    for(int i=0; i<n; i++) {
        if(i != n-1) {
            if(b[i] == b[i+1]) count++;
            else {
                // counts_b.push_back({b[i], count});
                counts_b[b[i]] = max(counts_b[b[i]], count);
                count = 1;
            }
        }
        else {
            // counts_b.push_back({b[i], count});
            counts_b[b[i]] = max(counts_b[b[i]], count);
        }
    }

    int ans = 0;
    for(auto &[num, max_count] : counts_a) {
        ans = max(ans, max_count + counts_b[num]);
    }

    for(auto &[num, max_count] : counts_b) {
        if(counts_b[num] > ans) ans = counts_b[num];
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