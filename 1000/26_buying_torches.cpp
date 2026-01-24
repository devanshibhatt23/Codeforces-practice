#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    long long x,y,k;
    cin >> x >> y >> k;

    long long p = k*(y+1) - 1;

    x--;
    long long q;
    if(p%x==0) q = p/x;
    else q = p/x + 1;

    cout << q + k << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        devanshi();
    }
}