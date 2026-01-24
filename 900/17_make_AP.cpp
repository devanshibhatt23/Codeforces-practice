#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    int a,b,c;
    cin >> a >> b >> c;

    if(a+c == 2*b) {
        cout << "YES\n";
        return;
    }

    // else if(a<b && b>c) {
    //     int k = abs(b-c);
    //     if((b+k) % a == 0) {
    //         cout << "YES\n";
    //         return;
    //     }
    //     else {
    //         cout << "NO\n"; 
    //         return;
    //     }
    // }

    // else if(a>b && b<c) {
    //     int k = abs(a-c);

    //     if(k==0) {
    //         cout << "NO\n"; 
    //         return;
    //     }

    //     else {
    //         if(k % 2 != 0) {
    //             cout << "NO\n"; 
    //             return;
    //         }
    //         else {
    //             if((a+(k/2)) % b == 0) cout << "YES\n";
    //             else cout << "NO\n"; 
    //             return;
    //         }
    //     }
    // }

    // else if(a==b) {
    //     if(c>a) {
    //         int k = c - b;
    //         if(k % 2 != 0) {
    //             cout << "NO\n"; 
    //             return;
    //         }
    //         else {
    //             if((a+(k/2)) % b == 0) cout << "YES\n";
    //             else cout << "NO\n"; 
    //             return;
    //         }
    //     }
    //     else {
    //         if((b-c) % a == 0) cout << "YES\n";
    //         else cout << "NO\n"; 
    //     }
    // }

    // else if(b==c) {
    //     if(b % a == 0) cout << "YES\n";
    //     else cout << "NO\n"; 
    // }

    // else if(a>b>c) {

    // }

    else {
        int k = (2*b - a);
        int m = (2*b - c);

        if((k > 0) && k%c == 0) cout << "YES\n";

        else if((a+c) % (2*b) == 0) cout << "YES\n";

        else if((m>0) && (m % a == 0)) cout << "YES\n";

        else cout << "NO\n";
        return;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        devanshi();
    }
}