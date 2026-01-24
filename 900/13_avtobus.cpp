#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    long long n;
    cin >> n;
    
    if((n%2 != 0) | n<4) {
        cout << "-1\n";
        return;
    }
    else if(n%6==0) {
        cout << n/6 << " " << n/4 << endl;
    }
    else if(n%6==2 | n%6==4) {
        cout << n/6 + 1 << " " << n/4 << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        devanshi();
    }
}
