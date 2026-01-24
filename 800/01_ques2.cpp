// line trip

#include <bits/stdc++.h>
using namespace std;

int min_volume_of_fuel() {
    int n, x;
    cin >> n >> x;
    vector<int> v(n);

    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    vector<int> route;
    route.push_back(0);
    for(int i=0; i<n; i++) {
        route.push_back(v[i]);
    }

    int k = 2 * (x-v[n-1]);

    int max_dis = 0;
    for(int i=1; i<n+1; i++) {
        int l = route[i] - route[i-1];
        if(l>max_dis) max_dis = l;
    }

    max_dis = max(max_dis, k);
    return max_dis;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cout << min_volume_of_fuel() << endl;
    }
}