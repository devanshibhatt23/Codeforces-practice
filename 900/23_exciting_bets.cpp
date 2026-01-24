#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    long long a,b; 
    cin >> a >> b;

    if(a-b==0) cout << "0 0\n";

    else if(a-b==1) cout << "1 0\n";
    
    else {
        long long k = abs(a-b);
        long long x = (a/k)*k + k - a;
        long long y = a - ((a/k)*k);

        cout << k << " " << min(x,y) << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        devanshi();
    }
}