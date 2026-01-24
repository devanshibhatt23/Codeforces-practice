#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    string s;
    cin >> s;

    // int n = 0;
    // int i=0;
    // while(i <= ((s.size()/2) + 1)) {
    //     if(s.size()==1) {
    //         if(n%2==1) cout << "DA\n";
    //         else cout << "NET\n";
    //         return;
    //     }
    //     else if(s.empty()) {
    //         if(n%2==1) cout << "DA\n";
    //         else cout << "NET\n";
    //         return;
    //     }
    //     else {
    //         int count = 0;
    //         for(int i=0; i<s.size(); i++) {
    //             if(s[i] == s[0]) count++;
    //         }
    //         if(count == s.size()) {
    //             if(n%2==1) cout << "DA\n";
    //             else cout << "NET\n";
    //             return;
    //         }
    //     }

    //     for(int j=0; j<(s.size()-1); j++) {
    //         if((s[j] != s[j+1])) {
    //             n++;
    //             s.erase(s.begin()+j, s.begin()+j+2);
    //             break;
    //         }
    //     }
    //     i++;
    // }
    // cout << "NET\n";

    int count0 = 0;
    int count1 = 0;
    for(char &ch : s) {
        if(ch == '0') count0++;
        else count1++;
    }

    int min_pairs = min(count0, count1);

    if(min_pairs % 2 == 0) cout << "NET\n";
    else cout << "DA\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        devanshi();
    }
}