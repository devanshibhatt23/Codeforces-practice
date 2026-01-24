#include <bits/stdc++.h>
#include <map>
using namespace std;

void devanshi() {
    int n, k;
    cin >> n >> k;
    vector<char> v(n);

    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    map<char,int> m;
    for(int i=0; i<n; i++) {
        m[v[i]]++;
    }
    
    int odd_count = 0;
    for(auto it : m) {
        if(it.second % 2 != 0) odd_count++;
    }

    if(odd_count > k+1) cout << "NO\n";
    else cout << "YES\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        devanshi();
    }
}