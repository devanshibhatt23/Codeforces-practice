#include <bits/stdc++.h>
using namespace std;

bool isfair(long long x) {
    vector<int> v;

    long long copy = x;

    while(x>0) {
        int k = x % 10;
        if(k) v.push_back(k);
        x /= 10;
    }

    int ct = 0;
    for(int i : v) {
        if(copy % i == 0) ct++;
    }

    if(ct == v.size()) return true;
    else return false;
}

void devanshi() {
    long long n;
    cin >> n;

    for(long long i=n; ; i++) {
        if(isfair(i)) {
            cout << i << endl;
            return;
        }
    }
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        devanshi();
    }
}