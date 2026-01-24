#include <bits/stdc++.h>
#include <set>
using namespace std;

void devanshi() {
    int n;
    cin >> n;

    vector<vector<int>> vec;

    for(int i=0; i<n; i++) {
        int m;
        cin >> m;
        vector<int> a(m);
        for(int i=0; i<m; i++) cin >> a[i];

        sort(a.begin(), a.end());
        vec.push_back(a);
    }
    
    vector<int> secondmini(0);
    vector<int> firstmini(0);

    for(int i=0; i<n; i++) {
        secondmini.push_back(vec[i][1]);
        firstmini.push_back(vec[i][0]);
    }

    sort(secondmini.begin(), secondmini.end());
    sort(firstmini.begin(), firstmini.end());

    long long ans = 0;
    int k = 0;

    for(int i=n-1; k<n-1; i--) {
        ans += secondmini[i];
        k++;
    }

    int miniele = *min_element(firstmini.begin(), firstmini.end());
    ans += miniele;

    cout << ans << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        devanshi();
    }
}