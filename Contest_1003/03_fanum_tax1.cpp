#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    for(int i=0; i<m; i++) {
        cin >> b[i];
    }

    if(is_sorted(a.begin(), a.end())) {
        cout << "YES\n";
        return;
    }
    else {
        for(int i=0; i<n; i++) {
            if(i==0) {
                a[i] = min(a[i], b[0]-a[i]);
            }
            else {
                int p = a[i];
                int q = b[0] - a[i];
                int r = min(p,q);
                
                if(r>=a[i-1]) a[i] = r;
                else a[i] = p + q - r;
            }
        }
        if(is_sorted(a.begin(), a.end())) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main() {
    int t; 
    cin >> t;
    while(t--) {
        devanshi();
    }
}