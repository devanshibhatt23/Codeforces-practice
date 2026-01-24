#include <bits/stdc++.h>
#include <set>
using namespace std;

void devanshi() {
    int n;
    cin >> n;

    int a = 1;

    for(int i=2; i*i<=n; i++) {
        if(n % i == 0) {
            a = n/i;
            break;
        } 
    }
    cout << a << " " << n-a << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        devanshi();
    }
}