// doremys number array

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    // ex1 : 1 2 1 1 2
    // ex2 : 1 2 2 1 1 2

    sort(v.begin(), v.end());
    // 1 1 1 2 2
    // 1 1 1 2 2 2

    if(n==1) {
        cout << "Yes\n";
        return;
    }

    else if(n==2) {
        cout << "Yes\n";
        return;
    }
   
    // 1 1 1 2 2 2
    else if(n%2==0) {
        int count1 = 0;
        int count2 = 0;

        for(int i=0; i<n/2; i++) {
            if(v[i]==v[0]) count1++;
        }
        for(int i=n/2; i<n; i++) {
            if(v[i]==v[n-1]) count2++;
        }
        if(count1==n/2 && count2==n/2) {
            cout << "Yes\n";
            return;
        }
        else {
            cout << "No\n";
            return;
        }
    }

    // 1 1 1 2 2 -> 1 2 1 2 1
    // 1 1 2 2 2
    // 4 4 4 4 4
    else {
        int count1 = 0;
        int count2 = 0;
        for(int i=0; i<n; i++) {
            if(v[i]==v[0]) count1++;
            else if(v[i]==v[n-1]) count2++;
        }

        if((count1==n/2 && count2==(n/2 + 1)) || (count2==n/2 && count1==(n/2 + 1)) || count1==n) {
            cout << "Yes\n";
        }
        else cout << "No\n";
    }
    return;
}

// void devanshi() {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for(int i=0; i<n; i++) {
//         cin >> v[i];
//     }

//     if(n==1 || n==2) {
//         cout << "Yes\n";
//         return;
//     }
    
//     for(int i=0; i<n; i++) {
//         for(int j=1; j<n; j++) {
//             int x = v[i];
//             int y = v[j];

//             if(x!=y) {
//                 int count1 = count(v.begin(), v.end(), x);
//                 int count2 = count(v.begin(), v.end(), y);
                
//                 if(abs(count1-count2)<=1 && count1 + count2 == n) {
//                     cout << "Yes\n";
//                     return;
//                 }
//             }
//         }
//     }

//     int count = 0;
//     for(int i=0; i<n; i++) {
//         if(v[i]==v[0]) count++;
//     }
//     if(count==n) {
//         cout << "Yes\n";
//         return;
//     }

//     cout << "No\n";
// }

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}
