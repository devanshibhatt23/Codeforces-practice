#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    string s;
    cin >> s;
    int n = s.size();

    vector<char> v;
    vector<int> v2;
    for(int i=0; i<n; i++) {
        v.push_back(s[i]);
    }
    
    for(int i=0; i<n-1; i++) {
        if(v[i]==v[i+1]) {
            cout << "1\n";
            return;
        }
    }
    cout << v.size() << endl;
}

int main() {
    int t; 
    cin >> t;
    while(t--) {
        devanshi();
    }
}