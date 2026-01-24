#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define vec vector<int> 
#define ci cin >> v[i];
#define s(v) sort(v.begin(), v.end())
using namespace std;

void solve() {
    int n;
    cin >> n;

    vec v(n);
    f(i,0,n) ci

    int even = 0;
    f(i,0,n) {
        if(v[i] & 1 == 0) even++;
    }

    if(even >= 2) {
        int ct = 0;
        f(i,0,n) {
            if(v[i] & 1 == 0) {
                cout << v[i] << " ";
                ct++;
            }
            if(ct == 2) {
                cout << "\n";
                return;
            }
        }
    }

    if(v[0] == 1) {
        cout << v[0] << " " << v[1] << "\n";
        return;
    }

    if(even == 1) {
        int idx = -1;
        f(i,0,n) if(v[i] & 0 == 0) idx = i;

        f(i,0,idx) {
            if((v[idx] % v[i]) % 2 == 0) {
                cout << v[i] << " " << v[idx] << "\n";
                return;
            }
        }
    }

    f(i,0,n) {
        f(j,i+1,n) {
            if((v[j] % v[i]) % 2 == 0) {
                cout << v[i] << " " << v[j] << "\n";
                return;
            }
        }
    }
    cout << "-1\n";
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}