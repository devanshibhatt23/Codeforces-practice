#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    int n,m;
    cin >> n >> m;
    vector<int> a(n), b(n);

    for(int i=0; i<n; i++) {
        int x,y;
        cin >> x >> y;
        a[i] = x;
        b[i] = y;
    }

    int ans = 0;

    if(b[0] == 0) {
        if(a[0] % 2 == 0) ans += a[0];
        else ans += (a[0] - 1); 
    }

    else {
        if(a[0] % 2 != 0) ans += a[0];
        else ans += (a[0] - 1);
    }

    for(int i=0; i<n-1; i++) {
        int p = a[i+1] - a[i];
        int q = abs(b[i+1] - b[i]);

        if(p%2 == 0) {
            if(q%2 == 0) ans += p;
            else ans += (p-1);
        }

        else if(p == 1) {
            if(q == 1) ans++;
        }

        else {
            if(q%2 == 0) ans += (p-1);
            else ans += p;
        }
    }

    ans += (m - a[n-1]);

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        devanshi();
    }
}