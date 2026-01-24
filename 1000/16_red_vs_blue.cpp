#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    int n, r, b; 
    cin >> n >> r >> b;
    int x;

    // if(r % (b+1) == 0) x = r/(b+1);
    // else x = r/(b+1) + 1;
    x = r/(b+1);
    int extra = r % (b+1);

    vector<char> s;

    b++;
    while(b--) {
        int q = x;
        while(q--) {
            // r--;
            s.push_back('R');
        }
        
        if(extra) {
            s.push_back('R');
            extra--;
        } 
        
        s.push_back('B');
    }

    s.pop_back();

    for(char ch : s) cout << ch;
    cout << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        devanshi();
    }
}