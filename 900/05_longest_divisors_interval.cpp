#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void devanshi() {
    long long n;
    cin >> n;

    if(n%2 != 0) {
        cout << "1\n";
        return;
    }

    if(n==2) {
        cout << "2\n";
        return;
    }

    for(int i=1; i<=n; i++) {
        if(n%i != 0) {
            cout << i-1 << endl;
            break;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        devanshi();
    }
}
