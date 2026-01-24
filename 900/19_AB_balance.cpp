#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    string s;
    cin >> s;
    int n = s.size();

    int count_ab = 0, count_ba = 0;
    for(int i=0; i<n-1; i++) {
        if(s[i]=='a' && s[i+1]=='b') count_ab++;
        if(s[i]=='b' && s[i+1]=='a') count_ba++;
    }

    if(count_ab == count_ba) cout << s << endl;

    else if(count_ab > count_ba) {
        int k = count_ab - count_ba;

        while(k--) {
            if(s[n-2]=='a' && s[n-1]=='b') s[n-1] = 'a';
            else if(s[n-2]=='b' && s[n-1]=='b') s[n-1] = 'a';
            else if(s[0]=='a' && s[1]=='b') s[0] = 'b';
        }
        cout << s << endl;
    }
    
    else if(count_ab < count_ba) {
        int k = abs(count_ab - count_ba);

        while(k--) {
            if(s[n-2]=='b' && s[n-1]=='a') s[n-1] = 'b';
            else if(s[n-2]=='a' && s[n-1]=='a') s[n-1] = 'b';
            else if(s[0]=='b' && s[1]=='a') s[0] = 'a';
        }
        cout << s << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        devanshi();
    }
}