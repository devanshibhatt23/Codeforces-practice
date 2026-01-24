#include <bits/stdc++.h>
using namespace std;

long long power_of_2(int b) {
    long long x = 1;
    for(int i=1; i<=b; i++) {
        x *= 2;
    }
    return x;
}

void devanshi() {
    int n; 
    cin >> n;

    vector<int> v(n); 
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    int count0 = 0, count1 = 0;
    for(int i=0; i<n; i++) {
        if(v[i]==0) count0++;
        if(v[i]==1) count1++;
    }

    if(count0 == 0) cout << count1 << endl;
    else if(count1 == 0) cout << "0\n";
    else {
        cout << count1 * (power_of_2(count0)) << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        devanshi();
    }
}