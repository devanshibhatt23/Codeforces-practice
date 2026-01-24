#include <bits/stdc++.h>
using namespace std;

int middle_ele(vector<int> vec) {
    int q = vec.size();
    if(q%2==1) return vec[q/2];
    else return vec[q/2 - 1];
}

void devanshi() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n*k);
    for(int i=0; i<n*k; i++) {
        cin >> v[i];
    }

    // if(n==1) {
    //     cout << accumulate(v.begin(), v.end(),0) << endl;
    //     return;
    // }

    // if(n==2) {
    //     long long sum = 0;
    //     for(int i=0; i<n*k; i+=2) {
    //         sum += v[i];
    //     }
    //     cout << sum << endl;
    //     return;
    // }

    // if(n<=4) {
    //     long long sum = 0;
    //     for(int i = ((n*k) - n + 1); i>=k; i = (i-(n-1))) {
    //         sum += v[i];
    //     }
    //     cout << sum << endl;
    //     return;
    // }

    // long long sum = 0;
    // int j=(n*k)-1;

    // for(int i=0; i<k; i++) {
    //     vector<int> vec(0);
    //     vec.push_back(v[i]);

    //     int count = 1;
    //     for(int m = j; count!=(n-1); j--) {
    //         vec.push_back(v[j]);
    //         count++;
    //     }
    //     sort(vec.begin(), vec.end());
    //     sum += middle_ele(vec);
    // }
    // cout << sum << endl;

    
    // int last_ele = (n*k - 1 );
    // for(int i=0; i<n; i++) {
        
    //     vector<int> vec(0);
    //     vec.push_back(v[i]);
    
    //     int count = 0;
    //     while(count < n) {
    //         vec.push_back(v[last_ele]);
    //         last_ele--;
    //         count++;
    //     }
    //     sort(vec.begin(), vec.end());
    //     sum += middle_ele(vec);
    // }
    
    // cout << sum << endl;
        
    long long sum = 0;
    int q = n*k - 1 - n/2;
    sum += v[q];

    for(int i=1; i<k; i++) {
        sum += v[q - n/2 - 1];
        q = q - n/2 - 1;
    }
    cout << sum << endl;
}
    
int main() {
    int t;
    cin >> t;
    while(t--) {
        devanshi();
    }
}