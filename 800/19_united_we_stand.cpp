#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    vector<int> b,c;

    int count = 0;
    for(int i=0; i<n; i++) {
        if(v[i]==v[0]) count++;
    }

    if(count == n) {
        cout << "-1\n";
        return;
    }

    // for(int i=0; i<n; i++) {
    //     if(v[i]==1) b.push_back(v[i]);
    //     else{
    //         for(int j=0; j<n; j++) {
    //             if((v[i] % v[j] == 0) && (i!=j) && v[j]!=1 && v[i]!=v[j]) {
    //                 c.push_back(v[i]);
    //                 break;
    //             }
    //             else {
    //                 b.push_back(v[i]);
    //                 break;
    //             }
    //         }
    //     }
    // }

    // sort(b.begin(), b.end());
    // sort(c.begin(), c.end());
    
    // if(c.empty()) {
    //     auto it = b.end();
    //     it--;
    //     int last = *it;
    //     b.pop_back();
    //     c.push_back(last);
    // }

    sort(v.begin(), v.end());
    auto it = v.end();
    it--;
    int last = *it;

    for(int i=0; i<n; i++) {
        if(v[i] < last) b.push_back(v[i]);
        else c.push_back(v[i]);
    }    

    cout << b.size() << " " << c.size() << endl;
    for(int i=0; i<b.size(); i++) {
        cout << b[i] << " ";
    }
    cout << endl;

    for(int i=0; i<c.size(); i++) {
        cout << c[i] << " ";
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