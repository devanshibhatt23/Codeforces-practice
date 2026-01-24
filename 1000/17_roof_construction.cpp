#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    int n;
    cin >> n;
    
    int msb = log2(n-1);

    for(int i=pow(2,msb)-1; i>=0; i--) cout << i << " ";
    for(int i=pow(2,msb); i<n; i++) cout << i << " ";
    cout << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        devanshi();
    }
}