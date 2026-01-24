#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    int n,k;
    cin >> n >> k;

    string s;
    cin >> s;

    vector<char> v(n,'+');

    int count0 = count(s.begin(), s.end(), '0');
    int count1 = count(s.begin(), s.end(), '1');
    int count2 = count(s.begin(), s.end(), '2');

    for(int i=0; i<n; i++) {
        if(i < count0+count2 || i >= n - count1 - count2) v[i] = '?'; 
        if(i < count0 || i >= n - count1 || k == n) v[i] = '-';
    }

    for(char ch : v) cout << ch;
    cout << endl;
}

int main() {
    int t=1;
    cin >> t;
    while(t--) {
        devanshi();
    }
}