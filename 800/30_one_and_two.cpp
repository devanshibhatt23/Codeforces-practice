#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    
    int count1 = 0;
    int count2 = 0;
    for(int i=0; i<n; i++) {
        if(v[i]==1) count1++;
        else if(v[i]==2) count2++;
    }

    if(count1==n) {
        cout << "1\n";
        return;
    }
    else if(count2==n) {
        if(n%2==0) {
            cout << n/2 << endl;
            return;
        }
        else {
            cout << "-1\n";
            return;
        }
    }
    else if(count2%2==0) {
        int count = 0;
        int k = 0;
        for(int i=0; i<n; i++) {
            if(v[i]==2) {
                count++;
                k = i + 1;
            }
            if(count==count2/2) break;
        }
        cout << k << endl;
        return;
    }
    else if(count2%2!=0) {
        cout << "-1\n";
    }
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}