#include <bits/stdc++.h>
#include <set>
using namespace std;

void devanshi() {
    long long n,k,x;
    cin >> n >> k >> x;

    long long min_sum = (k * (k+1)) / 2;
    long long max_sum = 0;
    for(long long i=n; i>(n-k); i--) {
        max_sum += i;
    }

    if(x>=min_sum && x<=max_sum) cout << "YES\n";
    else cout << "NO\n";
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        devanshi();
    }
}