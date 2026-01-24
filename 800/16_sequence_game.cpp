#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    vector<int> v1(0);
    v1.push_back(v[0]);

    // auto maxi = max_element(v.begin(), v.end());

    // for(int j=0; j<n-1; j++) {
    //     for(int i=1; i<(*maxi); i++) {
    //         if(i<=v[j] && i<=v[j+1]) {
    //             v1.push_back(i);
    //             break;
    //         }
    //     }
    //     v1.push_back(v[j+1]);
    // }

    for(int i=1; i<n; i++) {
        if(v[i] < v[i-1]) {
            v1.push_back(v[i]);
        }
        v1.push_back(v[i]);
    }

    cout << v1.size() << endl;
    for(int i=0; i<v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
} 