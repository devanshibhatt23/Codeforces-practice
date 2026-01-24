#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    long long a,b;
    cin >> a >> b;

    long long ans = INT_MAX;

    for(int i=0; i<=33; i++) {
        long long k = i;
        long long copyb = b + i;
        if(copyb==1) continue;
        else {    
            long long copya = a;
            while(copya > 0) {
                copya /= copyb;
                k++;
            }
        }
        ans = min(ans, k);
    }

    cout << ans << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        devanshi();
    }
}