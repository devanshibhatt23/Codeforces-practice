#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);

    int negative_ct = 0;

    ll sum = 0;

    for(int i=0; i<n; i++) {
        cin >> v[i];        
        if(v[i] < 0) {
            negative_ct++;
            sum += (-1*v[i]);
        }
        else sum += v[i];
        if(v[i] < 0) v[i] *= -1;
    }

    if(negative_ct % 2 == 0) cout << sum << "\n";
    else {
        sum -= (2*(*min_element(v.begin(), v.end())));
        cout << sum << "\n";
    }
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}