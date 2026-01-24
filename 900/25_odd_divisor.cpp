#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    long long n;
    cin >> n;

    long long product = 1;
    for(int i=1; i<=50; i++) {
        product *= 2;
        if(n==product) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        devanshi();
    }
}