#include <bits/stdc++.h>
#include <algorithm>
#include <set>
using namespace std;

void devanshi() {
    long long a,b,n;
    cin >> a >> b >> n;
    vector<long long> v(n);

    for(long long i=0; i<n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    long long i = 1;
    long long time = b-1;

    for(auto it=(v.begin()+n-1); it>=v.begin(); it--) {
        i = 1;
        long long maxi = *it;
        i = min(i+maxi, a);
        time += (i-1);
    }

    cout << time+1 << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        devanshi();
    }
}