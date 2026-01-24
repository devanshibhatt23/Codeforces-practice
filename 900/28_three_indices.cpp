#include <bits/stdc++.h>
#include <map>
using namespace std;

void devanshi() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    // if(v[0]==n) {
    //     cout << "NO\n";
    //     return;
    // }

    // if(v[n-1] != n) {
    //     int p;
    //     for(int i=0; i<n; i++) {
    //         if(v[i]==n) p = i;
    //     }
    
    //     cout << "YES\n" << p << " " << p+1 << " " << p+2 << endl;
    //     return;
    // }

    // else {
    //     if(v[0]==n-1) {
    //         if(n==4) {
    //             cout << "NO\n";
    //             return;
    //         }
    //         else {
    //             for(int i=1; i<n-1; i++) {
    //                 for(int j=i+1; j<n-1; j++) {
    //                     for(int k=j+1; k<n-1; k++) {
    //                         if(v[i]<v[j] && v[j]>v[k]) {
    //                             cout << "YES\n";
    //                             cout << i+1 << " " << j+1 << " " << k+1 << endl;
    //                             return;
    //                         }
    //                     }
    //                 }
    //             }  
    //             cout << "NO\n";
    //             return;      
    //         }
    //     }

    //     int p;
    //     for(int i=0; i<n; i++) {
    //         if(v[i]==(n-1)) p = i;
    //     }
    
    //     cout << "YES\n" << p << " " << p+1 << " " << p+2 << endl;
    //     return;
    // }

    // for(int i=0; i<n; i++) {
        // for(int j=i+1; j<n; j++) {
        //     for(int k=j+1; k<n; k++) {
        //         if(v[i]<v[j] && v[j]>v[k]) {
        //             cout << "YES\n";
        //             cout << i+1 << " " << j+1 << " " << k+1 << endl;
        //             return;
    //             }
    //         }
    //     }
    // }
    // cout << "NO\n";

    // vector<pair<int,int>> vec(0);

    // for(int i=0; i<n; i++) {
    //     for(int j=i+1; j<n; j++) {
    //         if(v[j]>v[i]) vec.push_back({i,j});
    //     }
    // }
    
    // for(auto it : vec) {
    //     int i = it.first;
    //     int j = it.second;
    //     for(int k=j+1; k<n; k++) {
    //         if(v[j] > v[k]) {
    //             cout << "YES\n" << i+1 << " " << j+1 << " " << k+1 << endl;
    //             return;
    //         }
    //     }
    // }
    // cout << "NO\n";

    for(int j=1; j<n-1; j++) {
        if(v[j] > v[j-1] && v[j] > v[j+1]) {
            cout << "YES\n" << j << " " << j+1 << " " << j+2 << endl;
            return;
        }
    }
    cout << "NO\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        devanshi();
    }
}