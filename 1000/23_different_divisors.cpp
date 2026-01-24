#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isprime(int a) {
    for(int i=2; i<=sqrt(a); i++) {
        if(a%i==0) return false;
    }
    return true;
}

void devanshi() {
    int d;
    cin >> d;

    int x1 = d + 1, x2;

    while(isprime(x1)==0) {
        x1++;
    }

    x2 = x1 + d;
    while(isprime(x2)==0) {
        x2++;
    }

    // cout << x1 << endl << x2 << endl;
    // cout << endl;

    ll x = pow(x1,3) * 1LL;
    ll ans = min(x, x1*1LL*x2);

    cout << ans << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        devanshi();
    }
}