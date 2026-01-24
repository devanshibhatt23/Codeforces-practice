#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    
    for(int i=0; i<n-1; i++) {
        if(v[0]==1) {
            v[0] = 2;
        }
        else if(v[i]==1) {
            v[i] = 2;
            if(v[i] % v[i-1] == 0) v[i] += 1;
        }
        if(v[i+1] % v[i] == 0) v[i+1] += 1;
    } 

    for(int i=0; i<n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        devanshi();
    }
}
