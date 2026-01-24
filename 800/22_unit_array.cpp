#include <bits/stdc++.h>
using namespace std;

int devanshi() {
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    int c1 = count(v.begin(), v.end(), 1);
    int c2 = count(v.begin(), v.end(), -1);
    int sum = accumulate(v.begin(), v.end(), 0);
    int prod = 1;

    for(int i=0; i<n; i++) {
        prod *= v[i];
    }

    if(c1==c2) {
        if(c2%2==0) {
            return 0;
        }
        else {
            return 1;
        }
        // cout << "0\n"; 
    }
    else if(sum>0 && c2%2==0) {
        // cout << "0\n";
        return 0;
    }
    else if(sum>0 && c2%2!=0) {
        // cout << "1\n";
        return 1;
    }
    // else {
    //     if(c2%2==0) {
    //         cout << (-sum)/2 << endl;
    //     }
    //     else{
    //         int m = c2 - c1;
    //         if(m%2==0) {
    //             cout << 
    //         }
    //     }
    // }

    int count = 0;
    for(int i=0; i<n; i++) {
        if(v[i]==(-1)) {
            v[i] = 1;
            count++;
            int sum = accumulate(v.begin(), v.end(), 0);
            int prod = 1;

            for(int i=0; i<n; i++) {
                prod *= v[i];
            }

            if(sum>=0 && prod==1) {
                return count;
            }
        }
    }
    // cout << count << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        cout << devanshi() << endl;
    }
}