#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    // int maxi = v[0];
    // int mini = v[0];
    // for(int i=0; i<n; i++) {
    //     if(v[i]>maxi) maxi = v[i];
    // }
    // for(int i=0; i<n; i++) {
    //     if(v[i]<mini) mini = v[i];
    // }

    // int first = *v.begin();
    // int last = *(v.begin()+n-1);

    // if(first==mini) {
    //     int max = last-first;
    //     for(int i=1; i<n; i++) {
    //         if(max < v[i]-first) max = v[i]-first;
    //     }
    //     cout << max << endl;
    //     return;
    // }

    // else if(last==maxi) {
    //     int diff = last-first;
    //     for(int i=0; i<n; i++) {
    //         if(diff < last-v[i]) diff = last - v[i];
    //     }
    //     cout << diff << endl;
    //     return;
    // }

    // else {
    //     int diff = 0;
    //     for(int i=0; i<n-1; i++) {
    //         if(v[i+1]-v[i] > diff) diff = v[i+1]-v[i];
    //     }
    //     cout << diff << endl;
    // }

    int ans = v[n-1] - v[0];
    for(int i=1; i<n; i++) {
        ans = max(ans, v[i]-v[0]);
    }
    for(int i=1; i<n; i++) {
        ans = max(ans, v[n-1]-v[i]);
    }
    for(int i=0; i<n-1; i++) {
        ans = max(ans, v[i]-v[i+1]);
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        devanshi();
    }
}
