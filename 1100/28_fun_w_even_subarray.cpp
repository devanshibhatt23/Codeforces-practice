#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    
    for(int i=0; i<n; i++) cin >> v[i];

    int i = n-1, ans = 0;
    while(i>=0 && v[i] == v[n-1]) {
        i--;
    }

    if(i == -1) cout << "0\n";
    else {
        int k = (n-1-i)*2;
        if(k >= n) {
            ans++;
            cout << ans << endl;
            return;
        }
        else {
            while(i>=0) {
                i -= (k/2);
                while(i>=0 && v[i] == v[n-1]) {
                    i--;
                }     
                k = (n-1-i)*2;
                ans++;
            }
            
            cout << ans << endl;
            return;
        }
    }
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}