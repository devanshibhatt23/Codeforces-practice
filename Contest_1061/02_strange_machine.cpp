#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    int n,q;
    cin >> n >> q;

    string s;
    cin >> s;
    
    while(q--) {
        int x;
        cin >> x;

        if(s.find('B') == string::npos) {
            cout << x << endl;
        }

        else {
            int ans = 0;

            for(int i=0; i<n; i=(i+1)%n) {
                if(x<=0) {
                    cout << ans << endl;
                    break;
                }
                if(s[i] == 'A') {
                    x--; 
                    ans++;
                }
                else {
                    x /= 2;
                    ans++;
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