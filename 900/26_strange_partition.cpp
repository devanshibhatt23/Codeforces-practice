#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    int count = 0;
    long long sum = 0;
    for(int i=0; i<n; i++) {
        if(v[i]%x == 0) {
            count++;
            sum += v[i]/x;
        }
       else sum += (v[i]/x + 1);
    }
    if(count == n) {
        cout << sum << " " << sum << endl;
        return;
    }

    long long total = 0;
    for(int i=0; i<n; i++) {
        total += v[i];
    }

    if(total % x == 0) cout << (total)/x << " " << sum << endl;
    else cout << (((total)/x) + 1) << " " << sum << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        devanshi();
    }
}