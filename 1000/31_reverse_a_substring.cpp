#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    string copy = s;
    sort(copy.begin(), copy.end());

    if(copy == s) {
        cout << "NO\n";
        return;
    }

    for(int i=0; i<n-1; i++) {
        if(s[i] > s[i+1]) {
            cout << "YES\n" << i + 1 << " " << i + 2 << endl;
            return;
        }
    }
}

int main() {
    int t = 1;
    while(t--) {
        devanshi();
    }
}