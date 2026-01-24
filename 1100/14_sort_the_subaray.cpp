#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);

    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> b[i];

    int st = 0, end = n-1;

    if(a == b) {
        for(int i=st; i<end; i++) {
            if(a[i+1] < a[i]) {
                end = i+1;
                break;
            }
        }

        cout << "1 " << end << "\n";
        return; 
    }

    for(int i=0; i<n; i++) {
        if(a[i] != b[i]) {
            st = i;
            break;
        }
    }

    for(int i=n-1; i>=0; i--) {
        if(a[i] != b[i]) {
            end = i;
            break;
        }
    }

    // sort(a.begin()+st, a.begin()+end+1);

    for(int i=st-1; i>=0; i--) {
        if(b[i] <= b[st]) st--;
        else break;
    }

    for(int i=end+1; i<n; i++) {
        if(b[i] >= b[end]) end++;
        else break;
    }

    cout << st+1 << " " << end+1 << "\n";
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}