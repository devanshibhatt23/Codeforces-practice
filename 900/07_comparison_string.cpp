#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void devanshi() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> v(0);

    int count = 1;
    for(int i=1; i<n; i++) {
        if(s[i] == s[i-1]) count++;
        else {
            v.push_back(count);
            count = 1;
        }
    }
    v.push_back(count);

    int maxi = *(max_element(v.begin(), v.end()));
    cout << maxi + 1 << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        devanshi();
    }
}
