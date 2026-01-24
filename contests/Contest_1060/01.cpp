#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int count = 0;
    for(char ch : s) {
        if(ch == '0') count++;
    }
    if(count == n) {
        cout << "0\n";
        return;
    }

    vector<int> ones(0);
    for(int i=0; i<n; i++) {
        if(s[i]=='1') ones.push_back(i);
    }

    int ct = 1;
    for(int i=1; i<ones.size(); i++) {
        if(ones[i] - ones[i-1] < k);
        else ct++;
    }

    cout << ct << endl;
} 

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        devanshi();
    }
}