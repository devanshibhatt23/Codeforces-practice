#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    int n; cin >> n;
    vector<int> a(n);

    int even = 0, odd = 0;
    long long ans = 0;

    vector<int> vec_odd(0);

    for(int i=0; i<n; i++) {
        cin >> a[i];
        if(a[i]%2 == 0) {
            even++;
            ans += a[i];
        }
        else {
            vec_odd.push_back(a[i]);
        }
    }

    if(vec_odd.size() == 0) {
        cout << "0\n";
        return;
    }
    
    sort(vec_odd.begin(), vec_odd.end());
    reverse(vec_odd.begin(), vec_odd.end());
    
    if(vec_odd.size() == 1 || vec_odd.size() == 2) {
        cout << ans + vec_odd[0] << endl;
        return;
    }
    
    int left = vec_odd.size() - 2;

    int cut = left/2 + 2;

    if(vec_odd.size() % 2 == 0) cut--;

    for(int i=0; i<cut; i++) {
        ans += vec_odd[i];
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