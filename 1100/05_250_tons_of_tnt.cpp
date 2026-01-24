#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i=0; i<n; i++) cin >> v[i];

    if(n == 1) {
        cout << "0\n";
        return;
    }

    long long ans = INT_MIN;

    for(int i=1; i<n; i++) {
        if(n % i == 0) {
            vector<long long> s;
            
            int k = n / i;

            int j = 0;
            for(int q=0; q<k; q++) {
                long long sum = 0;
                for(int ct=0; ct<i; ct++) {
                    sum += v[j];
                    j++;
                }

                s.push_back(sum);
            }

            long long maxi = *max_element(s.begin(), s.end());
            long long mini = *min_element(s.begin(), s.end());
            ans = max(ans, maxi-mini);
            // cout << ans << endl;
        }
    }

    cout << ans << endl;
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}