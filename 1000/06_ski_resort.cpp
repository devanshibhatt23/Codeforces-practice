#include <bits/stdc++.h>
#include <vector>
using namespace std;

long long c(int counts, int k) {
    long long ans = 1;
    for(int i=k; i<counts; i++) {
        ans += (1 + (counts-i));
    }
    return ans;
}

void devanshi() {
    int n, k, q;
    cin >> n >> k >> q;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    int count = 0;
    vector<int> counts(0);

    for(int i=0; i<n; i++) {
        if(v[i] <= q) count++;
        else {
            if(count != 0) {
                if(i != 0) {
                    counts.push_back(count);
                    count = 0;        
                }
            }
        }
    }
    counts.push_back(count);

    long long ans = 0;

    for(int i=0; i<counts.size(); i++) {
        if(counts[i] > k) {
            long long added = c(counts[i], k);
            ans += added;
        }
        else if(counts[i] == k) ans += 1;
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