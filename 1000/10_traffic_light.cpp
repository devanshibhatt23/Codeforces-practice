#include <bits/stdc++.h>
#include <set>
using namespace std;

void devanshi() {
    int n;
    char ch;
    string s;
    cin >> n >> ch >> s;

    if(ch == 'g') {
        cout << "0\n";
        return;
    }

    // int index_last, index_first;

    // for(int i=s.size() - 1; i>=0; i--) {
    //     if(s[i] == ch) {
    //         index_last = i;
    //         break;
    //     }
    // }

    // for(int i=0; i<s.size(); i++) {
    //     if(s[i] == ch) {
    //         index_first = i;
    //         break;
    //     }
    // }

    // s = s + s;
    
    // int ans;
    // for(int i=index_first; i<s.size(); i++) {
    //     if(s[i] == 'g') {
    //         ans = i - index_first;
    //         break;
    //     }
    // }
    
    // for(int i=index_last; i<s.size(); i++) {
    //     if(s[i] == 'g') {
    //         ans = max(ans,i - index_last);
    //         break;
    //     }
    // }

    // cout << ans << endl;

    int green, ans = 0;
    s = s + s;

    for(int i=2*n-1; i>=0; i--) {
        if(s[i] == 'g') green = i;
        if(s[i] == ch) ans = max(ans, green - i);
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