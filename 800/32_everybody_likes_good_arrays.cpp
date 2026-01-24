#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    vector<int> v1;
    
    if(v[0]%2==0) {
        int count1 = 1;
        int count2 = 0;

        for(int i=1; i<n; i++) {
            if(v[i]%2==0) {
                v1.push_back(count2);
                count1++;
                count2 = 0;
            }
            else {
                v1.push_back(count1);
                count2++;
                count1 = 0;
            }
        }

        if(v[n-1]%2==0) v1.push_back(count1);
        else v1.push_back(count2);

        int sum = 0;
        for(int i=0; i<v1.size(); i++) {
            if(v1[i]>1) {
                sum += (v1[i]-1);
            }
        }
        cout << sum << endl;
    }

    else {
        int count1 = 0;
        int count2 = 1;

        for(int i=1; i<n; i++) {
            if(v[i]%2==0) {
                v1.push_back(count2);
                count1++;
                count2 = 0;
            }
            else {
                v1.push_back(count1);
                count2++;
                count1 = 0;
            }
        }

        if(v[n-1]%2==0) v1.push_back(count1);
        else v1.push_back(count2);

        int sum = 0;
        for(int i=0; i<v1.size(); i++) {
            if(v1[i]>1) {
                sum += (v1[i]-1);
            }
        }
        cout << sum << endl;
    }
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}