#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    string s, p;
    cin >> s >> p;

    int n = s.size();
    int m = p.size();
    vector<int> v(0);

    for(int j=m-1; j>=0; j--) {
        for(int i=n-1; i>=0; i--) {
            if(p[j] == s[i]) {
                s.erase(s.begin()+i);
                v.push_back(i);
                break;
            }
        }
    }

    int count = 0;

    if(v.size() != m) {
        cout << "NO\n";
        return;
    }

    for(int i=1; i<v.size(); i++) {
        if(v[i]<v[i-1]) count++;
    }
    if(count == (v.size()-1)) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        devanshi();
    }
}