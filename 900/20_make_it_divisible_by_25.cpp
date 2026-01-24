#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    string s;
    cin >> s;

    int n = s.size();
    int count = 0;
    
    if(s[n-1]=='0' && (s[n-2]=='5' || s[n-2]=='0')) {
        cout << "0\n";
        return;
    }

    else if(s[n-1]=='5' && (s[n-2]=='2' || s[n-2]=='7')) {
        cout << "0\n";
        return;
    }

    else {
        vector<int> v(0);
        for(int i=n-1; i>=0; i--) {
            int count = 0;
            if(s[i]=='0') {
                for(int j=i-1; j>=0; j--) {
                    if(s[j]=='0' || s[j]=='5') {
                        count += (n-1-i);
                        count += (i-1-j);
                        v.push_back(count);
                        break;
                    }
                }
            }
        }

        for(int i=n-1; i>=0; i--) {
            int count = 0;
            if(s[i]=='5') {
                for(int j=i-1; j>=0; j--) {
                    if(s[j]=='2' || s[j]=='7') {
                        count += (n-1-i);
                        count += (i-1-j);
                        v.push_back(count);
                        break;
                    }
                }
            }
        }
        int k = *min_element(v.begin(), v.end());
        int m = *max_element(v.begin(), v.end());
        if(k) cout << k << endl;
        else cout << m << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        devanshi();
    }
}