#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    int c = 0;
    for(int i=0; i<n; i++) {
        if(v[i]==0) c++;
    }
    if(c==n) {
        cout << n << endl;
        return;
    }

    vector<int> v1(n);
    for(int i=0; i<n; i++) {
        int count = 0;
        if(v[i]==0) {
            do{
                count++;
                i++;
            }
            while(v[i]!=1 && i<n);
            v1.push_back(count);
        }        
    }

    auto maxi = max_element(v1.begin(), v1.end());
    cout << *maxi << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}