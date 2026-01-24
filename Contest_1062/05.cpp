#include <bits/stdc++.h>
#include <vector>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    vector<int> c(n);

    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> c[i];

    bool sort = 1;
    for(int i=0; i<n-1; i++) {
        if(a[i] > a[i+1]) {
            sort = 0;
            break;
        }
    }
    
    if(sort == 1) {
        cout << "0\n";
        return;
    }

    reverse(a.begin(), a.end());

    for(int i=0; i<n-1; i++) {
        if(a[i] > a[i+1]) {
            sort = 0;
            break;
        }
    }

    if(sort == 1) {
        
    }

    long long sum = 0;
    for(int i=0; i<n-1; i++) {
        if(a[i] > a[i+1]) {
            int x = c[i];
            int y = c[i+1];

            if(x<y) {
                if(i==n-1) sum += x;
                else if(a[i+2] > a[i]) sum += y;
                else sum += x;
            }
            else {
                sum += y;
            }
        }
    }

    cout << sum << endl;
}

int main() {
    int t = 1;
    cin >> t;

    while(t--) {
        solve();
    }
}