#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    int n,m;
    cin >> n >> m;

    vector<int> v(m*n);

    for(int i=0; i<m*n; i++) {
        cin >> v[i];
    }

    bool a = 0;
    for(int i : v) if(i==0) a = 1;

    long long sum = 0, ct = 0;

    for(int i=0; i<m*n; i++) {
        if(v[i]<0) ct++;
        v[i] = abs(v[i]);
        sum += v[i];
    }

    if(a==1) {
        cout << sum << endl;
        return;
    }

    if(a==0 && ct%2==1) {
        int mini = *min_element(v.begin(), v.end());
        sum = sum - (2*mini);
    }

    cout << sum << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        devanshi();
    }
}