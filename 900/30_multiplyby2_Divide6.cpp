#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    int n;
    cin >> n;

    if(n==1) {
        cout << "0\n";
        return;
    }

    
    int count2 = 0, count3 = 0;

    for(int i=0; i<31; i++) {
        if(n%2 == 0) {
            n /= 2;
            count2++;
        }
        if(n%3 == 0) {
            n /= 3;
            count3++;
        }
    }
    for(int i=0; i<count2; i++) n /= 2;
    for(int i=0; i<count3; i++) n /= 3;

    vector<int> primefacs(0);

    // for(int i=5; i<=sqrt(n); i++) {
    //     while(n % i == 0) {
    //         primefacs.push_back(i);
    //         n /= i;
    //     }
    // }
    // if(n>1) primefacs.push_back(n);

    // for(int i : primefacs) cout << i << " ";
    // cout << endl;
    
    // if(!primefacs.empty()) {
    //     cout << "-1\n";
    //     return;
    // }
    
    if(n>1 || count2 > count3) {
        cout << "-1\n";
        return;
    }
    else if(count2 == count3) cout << count2 << endl;
    else {
        int ans = 2*count3 - count2;
        cout << ans << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        devanshi();
    }
}