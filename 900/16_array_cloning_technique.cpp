#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    int n; cin >> n;
    vector<long long> v(n);

    for(int i=0; i<n; i++) cin >> v[i];

    if(n==1) {
        cout << "0\n";
        return;
    }

    sort(v.begin(), v.end());
    vector<int> c(0);

    int count = 1;
    for(int i=1; i<n; i++) {
        if(v[i]!=v[i-1])  {
            c.push_back(count);
            count = 1;
        }
        else count++;
    }
    c.push_back(count);

    int maxi = *max_element(c.begin(), c.end());

    // if(maxi == 1) {
    //     if(n%2) cout << n+2 << endl;
    //     else cout << n + n/2 - 1 << endl;
    // }

    if(maxi == n) {
        cout << "0\n";
        return;
    }

    // else {
    //     int k = n - maxi;
    //     if(k%maxi != 0) cout << (k + (k/maxi) + 1) << endl;
    //     else cout << (k + (k/maxi)) << endl;
    // }

    int ops = 0;
    
    while(maxi < n) {
        ops++;
        if(maxi*2 < n) {
            ops += maxi;
            maxi *= 2;
        }

        else {
            ops += (n-maxi);
            maxi = n;
        }
    }
    cout << ops << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        devanshi();
    }
}