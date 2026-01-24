#include <bits/stdc++.h>
#include <vector>
using namespace std;

void devanshi() {
    int n, k;
    cin >> n >> k;

    vector<pair<int,int>> p(0);
    vector<int> v(n);

    for(int i=0; i<n; i++) cin >> v[i];

    for(int i=0; i<n; i++) {
        v[i] = v[i] % k;
        if(v[i] % k == 0) v[i] = k;
        p.push_back({v[i], i+1});
    }

    sort(p.begin(), p.end(), [&](pair<int,int> a, pair<int,int> b) {
        if(a.first != b.first) return a.first > b.first;
        else return a.second < b.second;
    });

    for(auto it : p) cout << it.second << " ";
    cout << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        devanshi();
    }
}