#include <bits/stdc++.h>
#include <map>
using namespace std;

// bool should_i_swap(int a, int b) {
//     if(a<b) return 1;
//     else return 0;
// }

void devanshi() {
    int n,m;
    cin >> n >> m;

    vector<vector<int>> v(n, vector<int> (m));
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> v[i][j];
        }
    }

    map<int, int> m1;
    int sum1;

    for(int i=0; i<n; i++) {
        sum1 = 0;
        for(int j=0; j<m; j++) {
            sum1 += v[i][j];
        }
        m1.insert({sum1,i});
    }
    
    int sum = 0;
    for(int i=0; i<n; i++) {
        
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