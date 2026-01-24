#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    long long n, k, b, s;
    cin >> n >> k >> b >> s;

    if(s < k*b) {
        cout << "-1\n";
    }

    else if((k*b + (k-1)*n) < s) {
        cout << "-1\n";
    }

    else if(s == k*b) {
        for(int i=1; i<n; i++) cout << "0 ";
        cout << s << endl;
    }

    else if(s <= k*(b+1)) {
        long long q = k * b;
        long long p = k-1, left = s - q;

        vector<long long> v(n);
        v[n-1] = q;

        for(int i=0; i<n-1; i++) {
            if(left >= p) {
                v[i] = p;
                left -= (p);
            }
            else if(left<p) {
                v[i] = left;
                left -= left;
            }
        }

        sort(v.begin(), v.end());

        for(long long i : v) cout << i << " ";
        cout << endl;
    }

    else {
        long long q = k * (b+1) - 1;
        long long p = k-1, left = s - q;

        vector<long long> v(n);
        v[n-1] = q;

        for(int i=0; i<n-1; i++) {
            if(left >= p) {
                v[i] = p;
                left -= (p);
            }
            else if(left<p) {
                v[i] = left;
                left -= left;
            }
        }

        sort(v.begin(), v.end());

        for(long long i : v) cout << i << " ";
        cout << endl;
    }
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        devanshi();
    }
}