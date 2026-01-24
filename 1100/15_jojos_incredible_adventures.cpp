#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    string s;
    cin >> s;

    int n = s.size();
    vector<int> v;
    int ct = 0;

    for(int i=0; i<n; i++) {
        if(s[i] == '1') ct++;
        else {
            if(ct) v.push_back(ct);
            ct = 0;
        }
    }

    if(ct) v.push_back(ct);

    int maxi = 0;
    if(!v.empty()) maxi = *max_element(v.begin(), v.end());

    if(maxi == n) {
        cout << n*1LL*n << endl;
        return;
    }

    int x = v.size();

    if(s[n-1] != '0' && x != 1 && s[0] != '0') maxi = max(maxi, v[0] + v[x-1]);
    
    int p = (maxi+1)/2;
    int q = (maxi+2)/2;
    
    cout << p*1LL*q << endl;
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}