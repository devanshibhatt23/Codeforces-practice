#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    long long a,b;
    cin >> a >> b;

    long long copyb = b;
    long long copya = a;

    if(a%2!=0 && b%2!=0) cout << a*b + 1 << endl;
    else if(a%2==0 && b%2!=0) cout << "-1\n";
    else if(a%2==0 && b%2==0) cout << (a*b)/2 + 2 << endl;
    else if(b%4 == 0) cout << (a*b)/2 + 2 << endl;
    else cout << "-1\n";

    // vector<long long> factors(0);

    // for(long long i=1; i<=b; i++) {
    //     if(b % i == 0) factors.push_back(i);
    // }

    // vector<long long> vals(0);
    // for(long long i : factors) {
    //     a = copya * i;
    //     b = copyb / i;
    //     if((a+b) % 2 == 0) vals.push_back(a + b);
    // }

    // if(vals.empty()) cout << "-1\n";
    // else cout << *max_element(vals.begin(), vals.end()) << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        devanshi();
    }
}