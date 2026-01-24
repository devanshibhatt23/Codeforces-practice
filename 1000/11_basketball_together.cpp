#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    int n, d;
    cin >> n >> d;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    sort(v.begin(), v.end());
    int wins = 0;
    vector<int> players(0);

    for(int i=n-1; i>=0; i--) {
        int k = d / v[i];
        players.push_back(k + 1);
    }

    int sum = 0;
    for(int i : players) {
        sum += i;
        if(sum > n) {
            cout << wins << endl;
            return;
        }
        wins++;
        if(sum == n) {
            cout << wins << endl;
            return;
        }
    }
}

int main() {
    devanshi();
}