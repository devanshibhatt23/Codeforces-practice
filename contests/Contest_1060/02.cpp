#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i=0; i<n; i++) cin >> v[i];

    long long ans = 0;

    for(int i=1; i<n; i++) {
        v[i] = max(v[i], v[i-1]);
    }

    for(int i=0; i<n-1; i++) {
        if(i%2==0) {
            if(v[i]>=v[i+1]) {
                if(v[i]>=v[i+1]) {
                    ans += (v[i] - v[i+1] + 1);
                    v[i] = v[i+1] - 1;
                }
            }
        }

        else {
            if(v[i]<=v[i+1]) {
                if(v[i]<=v[i+1]) {
                    ans += (v[i+1] - v[i] + 1);
                    v[i+1] = v[i] - 1;
                }
            }
        }
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