#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    string s;
    cin >> s;
    int n = s.size();

    if(n==1) {
        cout << "1\n";
        return;
    }

    int count0 = 0, count1 = 0;
    for(char &ch : s) {
        if(ch == '0') count0++;
        else count1++;
    }

    if(count0 == count1) {
        cout << "0\n";
        return;
    }

    else {
        string t;

        for(int i=0; i<n; i++) {        
            if(s[i] == '1') {
                if(count0 > 0) {
                    t.push_back('0');
                    count0--;
                }
                else {
                    cout << n - t.size() << "\n";
                    return;
                }
            }

            if(s[i] == '0') {
                if(count1 > 0) {
                    t.push_back('1');
                    count1--;
                }
                else {
                    cout << n - t.size() << "\n";
                    return;
                }
            }
        }
    }
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        devanshi();
    }
}