#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    string s;
    cin >> s;

    s.pop_back();
    s.pop_back();
    s.push_back('i');
    cout << s << endl;
}

int main() {
    int t; 
    cin >> t;
    while(t--) {
        devanshi();
    }
}