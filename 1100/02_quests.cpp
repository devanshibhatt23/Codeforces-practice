#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    vector<int> b(n);

    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> b[i];

    vector<long long> sols;

    vector<long long> pref(n);
    pref[0] = a[0];

    for(int i=1; i<n; i++) pref[i] = pref[i-1] + a[i];

    vector<int> maxb(n);
    int bmax = b[0];
    maxb[0] = b[0];
    
    int p = k;
    if(k>n) p = n;
    
    for(int i=1; i<n; i++) {
        if(b[i] > bmax) bmax = b[i];
        maxb[i] = bmax;
    }

    for(int i=0; i<p; i++) {
        long long sum = pref[i];

        // int maxi = *max_element(b.begin(), b.begin() + i + 1);
        int maxi = maxb[i];
        sum += 1LL * ((k-i-1) * maxi);

        sols.push_back(sum);
    }
    
    cout << *max_element(sols.begin(), sols.end()) << endl;
}

int main() {
    int t=1;
    cin >> t;

    while(t--) {
        devanshi();
    }
}