#include <bits/stdc++.h>
#include <algorithm>
#include <set>
using namespace std;

void devanshi() {
    int n,k;
    cin >> n >> k;

    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    
    int count = 1;
    int ans = 0;
    vector<int> s(0);

    for(int i=1; i<n; i++) {
        if(v[i]-v[i-1] > k) {
            s.push_back(count);
            count = 1;
        }
        else count++;
    }
    s.push_back(count);

    int m = *max_element(s.begin(), s.end());
    cout << n - m << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        devanshi();
    }
}
