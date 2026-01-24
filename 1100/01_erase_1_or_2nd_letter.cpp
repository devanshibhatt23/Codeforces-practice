#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    map<char,int> freq;
    long long count = 0, ans = 0;

    for(int i=0; i<n; i++) {
        freq[s[i]]++;
        if(freq[s[i]] == 1) count++;

        ans += count;
    }

    cout << ans << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        devanshi();
    }
}