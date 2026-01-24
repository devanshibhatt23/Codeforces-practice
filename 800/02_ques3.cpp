// cover in water

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void solve() {
    int n; 
    cin >> n;
    string s;
    cin >> s;

    for(int i=1; i<n-1; i++) {
        if(s[i]=='.' && s[i-1]=='.' && s[i+1]=='.') {
            cout << "2\n";
            return;
        }   
    } 
    
    // if(s.find("...") != string::npos) {
    //     cout << "2\n";
    // }

    // else {

    bool a = all_of(s.begin(), s.end(), [](char ch) {return ch=='#';});
    if(a) {
        cout << "0\n";
    }
    else{
        int count = 0;
        for(int i=0; i<n; i++) {
            if(s[i]=='.') count++;
        }
        cout << count << endl;
    }
}
// }
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}