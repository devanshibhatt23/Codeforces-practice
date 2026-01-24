// dont try to count

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;

    int count = 0;
    
    // 10^8 op/sec
    // 1000 * 25 = 25000
    for(int i=0; i<6; i++) {
        if(x.find(s) != string::npos) {
            cout << count << "\n";
            return;
        }
        else {
            x = x + x;
            count++;
        }
    }
    cout << "-1\n";
    return;

    // while(x.find(s) == string::npos) {
    //     x = x + x;
    //     count ++;
    //     if(x.find(s) != string::npos) {
    //         cout << count << "\n";
    //         return;
    //     }
    // }
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}