#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k,x;
    cin >> n >> k >> x;

    if(k==1) {
        cout << "NO\n";
        return;
    }

    else if(x!=1) {
        cout << "YES\n" << n << endl;
        for(int i=0; i<n; i++) {
            cout << "1 ";
        }
        cout << endl;
    }

    else if(n%2==0){
        cout << "YES\n" << n/2 << endl;
        for(int i=0; i<n/2; i++) {
            cout << "2 ";
        }
        cout << endl;
    }

    else if(k==2 && x!=2 && n%2!=0) {
        cout << "NO\n";
    }

    else if(n%2!=0 && x!=3) {
        cout << "YES\n";
        int m = ((n/2) - 1);
        cout << m+1 << endl;
        for(int i=0; i<m; i++) {
            cout << "2 ";
        } 
        cout << "3\n";
    }
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}