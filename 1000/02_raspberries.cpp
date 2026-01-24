#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    if(k!=4) {
        vector<int> remains(0);
        for(int i=0; i<n; i++) {

            if(v[i] % k == 0) {
                cout << "0\n";
                return;
            }

            int remainder = v[i] % k;
            int to_be_added = k - remainder;
            remains.push_back(to_be_added);
        }
        cout << *min_element(remains.begin(), remains.end()) << "\n";
    }
    else {
        int count_even = 0, count4 = 0;
        for(int i=0; i<n; i++) {
            if(v[i] % 2 == 0) count_even ++;
            if(v[i] % 4 == 0) count4++;
            if(count4 >= 1 || count_even >= 2) {
                cout << "0\n";
                return;
            }
        }

        if(count_even == 1) {
            cout << "1\n";
            return;
        }

        for(int i=0; i<n; i++) {
            if((v[i]+1) % 4 == 0) {
                cout << "1\n";
                return;
            }
        }
        cout << "2\n";
        return;
    }
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        devanshi();
    }
}