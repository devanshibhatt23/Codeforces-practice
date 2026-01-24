#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    int n;
    cin >> n;
    
    if(n%3 == 0) cout << "0\n";
    else if(n%3 == 1) cout << "2\n";
    else cout << "1\n";
}

int main() {
    int t=1;
    cin >> t;
    while(t--) {
        devanshi();
    }
}