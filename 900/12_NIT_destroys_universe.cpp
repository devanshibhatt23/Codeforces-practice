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

    int count0 = 0;
    for(int i : v) {
        if(i==0) count0++;
    }

    if(count0==n) {
        cout << "0\n";
        return;
    }

    else if(count0 == 0) {
        cout << "1\n";
        return;
    }

    else {
        int temp1, temp2; 
        for(int i=0; i<n; i++) {
            if(v[i]!=0) {
                temp1 = i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--) {
            if(v[i]!=0) {
                temp2 = i;
                break;
            }
        }

        for(int i=temp1; i<=temp2; i++) {
            if(v[i]==0) {
                cout << "2\n";
                return;
            }
        }
        cout << "1\n";
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        devanshi();
    }
}
