#include <bits/stdc++.h>
#include <map>
#include <set>
using namespace std;

void devanshi() {
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i=0; i<n; i++) cin >> v[i];

    map<int,int> m;

    for(int i=0; i<n; i++) {
        m[v[i]]++;
    }

    // for(auto i : m) cout << i.first << " " << i.second << endl;
    // cout << endl;

    int count = 0;
    for(auto i : m) {
        if(i.first == 1) count += i.second;
        else if(i.second % i.first == 0) count += i.second;
    }

    if(count != n) cout << "-1\n";

    else {
        int z = 1;
        map<int, set<int>> map;

        for(int i=0; i<n; i++) {
            map[v[i]].insert({i});
        }

        for(int i=0; i<map.size(); i++) {
            for(auto j : map[i]) cout << j << " ";
            cout << endl;
        } 
    }
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        devanshi();
    }
}