#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    int k,x;
    cin >> k >> x;

    while(k--) {
        // if(x % 2 == 0) x = 2 * x;
        // else if((x-1) % 3 == 0) x = (x-1)/3;
        // else x = x * 2;

        x = x * 2;
    }

    cout << x << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        devanshi();
    }
}