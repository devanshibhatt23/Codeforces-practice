#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    int n, m, x, y; 
    cin >> n >> m >> x >> y;

    if(x<=n/2) {
        if(y<=m/2) cout << "1 1 " << n << " " << m << endl;
        else cout << "1 " << m << " " << n << " 1" << endl;
    } 
    else {
        if(y<=m/2) cout << "1 " << m << " " << n << " 1" << endl;
        else cout << "1 1 " << n << " " << m << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        devanshi();
    }
}