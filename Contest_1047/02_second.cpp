#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i=0; i<n; i++) cin >> v[i];

    int k = n + 1;

    for(int i=0; i<n; i++) {
        cout << k - v[i] << " ";
    }
    cout << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        devanshi();
    }
}