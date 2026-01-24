#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    for(int i=0; i<n; i++) {
        if(s[i] == '(') {
            for(int j=i+1; j<n; j++) {
                if(s[j] == ')') {
                    // s.erase(s.begin()+i, s.begin()+i+1);
                    // s.erase(s.begin()+j, s.begin()+j+1);
                    s[i] = 0;
                    s[j] = 0;
                    break;
                }
            }
        }
    }

    int ct = 0;
    for(int i=0; i<n; i++) {
        if(s[i]) ct++;
    }
    
    cout << ct / 2 << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        devanshi();
    }
}