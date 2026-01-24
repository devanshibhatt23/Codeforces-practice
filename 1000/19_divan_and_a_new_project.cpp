#include <bits/stdc++.h>
#include <map>
using namespace std;

void devanshi() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    vector<pair<int, int>> m;
    for(int i=0; i<n; i++) m.push_back({v[i], i});

    vector<int> vec(n+1);
    vec[0] = 0;

    long long time = 0;

    int p = 1;
    sort(m.begin(), m.end());
    reverse(m.begin(), m.end());

    for(int i=0; i<n; i++) {
        vec[m[i].second+1] = p;
        time += (2 * abs(p) * 1LL * m[i].first);

        if(p<0) p = abs(p) + 1;
        else p = -1*p;
    }

    cout << time << endl;
    for(int i : vec) cout << i << " ";
    cout << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        devanshi();
    }
}