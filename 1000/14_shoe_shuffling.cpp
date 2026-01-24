#include <bits/stdc++.h>
#include <map>
using namespace std;

void devanshi() {
    int n; cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++) cin >> v[i];

    if(n == 1) {
        cout << "-1\n";
        return;
    }

    vector<int> counts(0);
    int count = 1;

    for(int i=1; i<n; i++) {
        if(v[i] == v[i-1]) count++;
        else {
            counts.push_back(count);
            count = 1;
        }
    }
    counts.push_back(count);

    // reverse(counts.begin(), counts.end());

    if(counts.size() == 1) {
        for(int i=2; i<=n; i++) cout << i << " ";
        cout << "1" << endl;
        return;
    }

    for(int i : counts) {
        if(i == 1) {
            cout << "-1\n";
            return;
        }
    }

    // int k = 0;
    // for(int i=0; i<counts.size(); i++) {
    //     if(k <= n) {
    //         for(int j=k+counts[i]; j>k+1; j--) {
    //             cout << j << " ";
    //         }
    //         cout << k+1 << " ";
    //         k += counts[i];
    //     }
    // }

    map<int,vector<int>> m;
    for(int i=0; i<n; i++) {
        m[v[i]].push_back(i+1);
    }

    for(auto i : m) {
        // for(int j=i.second.size()-1; j>0; j--) {
        //     cout << i.second[j] << " ";
        // }
        // cout << i.second[0] << " ";
        cout << i.second[i.second.size()-1] << " ";

        for(int j=0; j<i.second.size()-1; j++) {
            cout << i.second[j] << " ";
        }
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