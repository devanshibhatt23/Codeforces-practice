#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define vec vector<int> 
#define ci cin >> v[i]
#define so(v) sort(v.begin(), v.end())
using namespace std;

void solve() {
    int n,s;
    cin >> n >> s;

    vec v(n);
    int sum = 0;
    f(i,0,n) {
        ci;
        sum += v[i];
    }

    if(sum > s) {
        f(i,0,n) cout << v[i] << " ";
        cout << "\n";
    }
    else if(sum == s) {
        cout << "-1\n";
    }
    else {
        if(s == sum + 1) {
            int ct0 = 0, ct2 = 0;
            f(i,0,n) {
                if(v[i] == 2) ct2++;
                else if(v[i] == 0) ct0++;
            }

            f(i,0,ct0) v[i] = 0;
            f(i,ct0,ct0+ct2) v[i] = 2;
            f(i,ct0+ct2,n) v[i] = 1;

            f(i,0,n) cout << v[i] << " ";
            cout << "\n";
        }
        else {
            cout << "-1\n";
        }
    }
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}